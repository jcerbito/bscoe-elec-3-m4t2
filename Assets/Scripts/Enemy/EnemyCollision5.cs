using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyCollision5 : MonoBehaviour {

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

	void OnTriggerEnter(Collider bull){
			HealthSystem5.health = HealthSystem5.health - 1;
			if(HealthSystem5.health <= 1){
				HealthSystem5.health = 0;
				if (HealthSystem5.health == 0){
					ScoreBoard.score += scorePoint;
				}
				Explode();
				expFx.Play();
			}
	}
}
