using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class Player : MonoBehaviour {

	public float speed;
	public float rotSpeed;


	float rangeX = 3.0f;


	public float roll = 0.0f;
	public float pitch = 0.0f;
	public float yaw = 0.0f;



	
	void Start () {
		
	}
	
	
	void Update () {
	
		float xThrow = CrossPlatformInputManager.GetAxis("Horizontal") * Time.deltaTime * speed;
		float yThrow = CrossPlatformInputManager.GetAxis("Vertical") * Time.deltaTime * speed;
		
		transform.Translate(new Vector3(xThrow, yThrow, 0));


		if(Input.GetButtonDown("Horizontal") && Input.GetAxisRaw("Horizontal") < 0) {
		 transform.Rotate(0f, 0f, roll * rotSpeed, Space.Self);
		}else if(Input.GetButtonDown("Vertical") && Input.GetAxisRaw("Vertical") < 0) {
           transform.Rotate(pitch * rotSpeed , 0f, 0f, Space.Self);
		}else if(Input.GetButtonDown("Horizontal") && Input.GetAxisRaw("Horizontal") > 0) {
          transform.Rotate(0f, 0f, -roll * rotSpeed,  Space.Self);
		}else if(Input.GetButtonDown("Vertical") && Input.GetAxisRaw("Vertical") > 0) {
           transform.Rotate(-pitch * rotSpeed , 0f, 0f, Space.Self);
		}


 
		onScreenOnly();
	
	}

	void onScreenOnly(){
		 Vector3 pos = Camera.main.WorldToViewportPoint (transform.position);
         pos.x = Mathf.Clamp01(pos.x);
         pos.y = Mathf.Clamp01(pos.y);
         transform.position = Camera.main.ViewportToWorldPoint(pos);
	}

	




}
