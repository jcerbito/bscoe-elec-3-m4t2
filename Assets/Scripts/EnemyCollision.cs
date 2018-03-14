using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class EnemyCollision : MonoBehaviour {

    [SerializeField] ParticleSystem effect;
	[SerializeField] GameObject bull;
	[SerializeField] float delayTime = 0.5f;
	[SerializeField] int scorePoint = 5;
	public AudioSource expFx;
	
	

	void Start(){
		expFx = GetComponent<AudioSource>();
	}

	void Explode(){
		
		effect.Play();
		Destroy(gameObject, delayTime);
		
	}

	
	void OnTriggerEnter(Collider bull){
			HealthSystem.health = HealthSystem.health - 1;
			if(HealthSystem.health <= 1){
				HealthSystem.health = 0;
				if (HealthSystem.health == 0){
					ScoreBoard.score += scorePoint;
				}
				Explode();
				expFx.Play();
			}
			print("asdf");
	}




	

	


	
}
