using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WASDMovement : MonoBehaviour
{
    private float speed = 10f;
    void Update()
    {
        // Get the horizontal and vertical axis.
        // By default they are mapped to the arrow keys.
        // The value is in the range -1 to 1
        float vertical = Input.GetAxis("Vertical") * speed;
        float horizontal = Input.GetAxis("Horizontal") * speed;

        // Make it move 10 meters per second instead of 10 meters per frame...
        vertical *= Time.deltaTime;
        horizontal *= Time.deltaTime;

        // Move translation along the object's z-axis
        transform.Translate(horizontal, 0, vertical);
    }

    // Destroy black piece if colliding with one
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Black Piece") {
            Destroy(collision.gameObject);
        }
    }
}
