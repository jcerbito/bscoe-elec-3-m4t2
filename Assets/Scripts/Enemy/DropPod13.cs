using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropPod13 : MonoBehaviour {

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
			HealthSystemd13.health = HealthSystemd13.health - 1;
			if(HealthSystemd13.health <= 1){
				HealthSystemd13.health = 0;
				if (HealthSystemd13.health == 0){
					ScoreBoard.score += scorePoint;
				}
				Explode();
				expFx.Play();
			}
	}
}
