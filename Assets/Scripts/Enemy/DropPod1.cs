using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropPod1 : MonoBehaviour {

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
			HealthSystemdp1.health = HealthSystemdp1.health - 1;
			if(HealthSystemdp1.health <= 1){
				HealthSystemdp1.health = 0;
				if (HealthSystemdp1.health == 0){
					ScoreBoard.score += scorePoint;
				}
				Explode();
				expFx.Play();
			}
	}
}
