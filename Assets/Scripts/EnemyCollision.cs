using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class EnemyCollision : MonoBehaviour {

    [SerializeField] ParticleSystem effect;
	[SerializeField] GameObject bull;
	[SerializeField] float delayTime = 2f;
	[SerializeField] int scorePoint = 5;
	public AudioSource expFx;

	void Start(){
		expFx = GetComponent<AudioSource>();
	}

	void Explode(){
		effect.Play();
		Destroy(gameObject, delayTime);
	}

	private void forScore(){
        ScoreBoard.score += scorePoint;
		HealthSystem.health = HealthSystem.health - 1;
    }

	void OnTriggerEnter(Collider bull){
	    forScore();
		if (HealthSystem.health <= 1){
			HealthSystem.health = 0;
			Explode();
			expFx.Play();
		}
		
	}

	


}
