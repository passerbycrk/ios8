/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SceneKit/SCNManipulator.h>

// Not exported
@interface SCNNodeManipulator : SCNManipulator
{
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _xAxisToZAxisTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _yAxisToZAxisTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _xyPlaneToYZPlaneTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _xyPlaneToXZPlaneTransform
    // Error parsing type: (?="axisMove"{?="selectedAxis"S"originalPosition""axisDirection""mouseDeltaVector"}"planeMove"{?="selectedPlane"S"originalPosition""planeNormal""pointInPlane""mouseDeltaVector"}"axisRotate"{?="selectedAxis"S"originalMouseLocation"{CGPoint="x"d"y"d}"rotationSign"f"originalRotation"{__C3DQuaternion="x"f"y"f"z"f"s"f}}), name: _actionData
    _Bool _isMouseDown;
    unsigned short _action;
}

- (_Bool)mouseUp:(CDStruct_edec59f9)arg1;
- (_Bool)mouseDown:(CDStruct_edec59f9)arg1;
- (_Bool)mouseDragged:(CDStruct_edec59f9)arg1;
- (_Bool)mouseMoved:(CDStruct_edec59f9)arg1;
- (void)draw;
- (id)init;

@end

