using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropPod12 : MonoBehaviour {

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
			HealthSystemd12.health = HealthSystemd12.health - 1;
			if(HealthSystemd12.health <= 1){
				HealthSystemd12.health = 0;
				if (HealthSystemd12.health == 0){
					ScoreBoard.score += scorePoint;
				}
				Explode();
				expFx.Play();
			}
	}
}
