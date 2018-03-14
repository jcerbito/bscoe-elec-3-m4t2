using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyCollision3 : MonoBehaviour {

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
		ScoreBoard.score -= 5;
		HealthSystem3.health = HealthSystem3.health - 1;
    }

	void OnTriggerEnter(Collider bull){
			HealthSystem3.health = HealthSystem3.health - 1;
			if(HealthSystem3.health <= 1){
				HealthSystem3.health = 0;
				if (HealthSystem3.health == 0){
					ScoreBoard.score += scorePoint;
				}
				Explode();
				expFx.Play();
			}
	}
}
