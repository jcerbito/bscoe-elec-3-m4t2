using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthSystemd5 : MonoBehaviour {

	public static int health;
	Text text;

	private void Start(){
 		text = GetComponent<Text>();
		health = 2;
	}

	private void Update(){
		text.text = "Health: " + health;
	}
}
