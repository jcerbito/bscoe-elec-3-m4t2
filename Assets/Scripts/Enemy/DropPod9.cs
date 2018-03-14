using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropPod9 : MonoBehaviour {

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
			HealthSystemd9.health = HealthSystemd9.health - 1;
			if(HealthSystemd9.health <= 1){
				HealthSystemd9.health = 0;
				if (HealthSystemd9.health == 0){
					ScoreBoard.score += scorePoint;
				}
				Explode();
				expFx.Play();
			}
	}
}
