using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthSystemdp1 : MonoBehaviour {

	public static int health;
	Text text;

	private void Start(){
 		text = GetComponent<Text>();
		health = 5;
	}

	private void Update(){
		text.text = "Health: " + health;
	}
}
