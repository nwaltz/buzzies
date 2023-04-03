# buzzies
bilateral stimulation tappers for use as a EMDR therapy device through Engineers Without Borders OSU


top level models:

pods: final pod assm.SLDASM

pcb case: pcb assm no snaps.SLDASM

## Production

There are several ways to manufacture the mechanical components needed to house the electrical components for the buzzies.  While the original design concept was produced using a resin SLA printer (Prusa SLIS and Formlabs 3+), components were also designed for injection molding and filament 3D printing.  Each component will have subfolders containing the CAD models, and the subsections below will describe how to manufacture these components.

### Resin SLA Printing

The motivation behind using an SLA printer was to retain the smooth and polished surface finish of an injection molded part while allowing for overhangs and otherwise difficult to manufacture features.  There are four unique parts to manufacture in this design: 4 identical pod halves, a pcb base case, a pcb back cover, and a battery back cover.  

The pod halves are rotationally symmetric about the centerline and will hold a small piezo vibration motor in the center cavity.  Since such motors will generally have small, fragile wires, we recommmend soldering larger (e.g. 16 AWG) wires to the ends of the motor wires.  There is space to house the solder connection within the pods to maintain the strength of the connection. 

Once the motors are soldered and housed within the pods, the pod halves need to be fastened together.  The pod halves will self-align when placed together, and will be fastened with two dowel pins.  There should be two small holes on the side of the pod that the wires exit from.  Insert the dowel pins into these holes to fasten the pods together.  The end of the pin should be flush with the face of the pod.  If the pins seem to be sticking, you may need to lightly tap them with a hammer.


### Injection Molding



### Filament Printing

