/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ODIDrawable : NSObject
{
}

+ (id)shapeGeometryForRectangle;
+ (id)shapeGeometryForEllipse;
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)arg1;
+ (id)shapeGeometryForRightArrowWithControlPoint:(struct CGPoint)arg1;
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(struct CGPoint)arg1;
+ (id)shapeGeometryWithShapeType:(int)arg1 adjustValues:(const int *)arg2;
+ (id)shapeGeometryForBezierPath:(struct CGPath *)arg1 gSpace:(struct CGRect)arg2;
+ (struct CGSize)sizeOfDiagram:(id)arg1;
+ (id)addShapeWithBounds:(struct CGRect)arg1 rotation:(float)arg2 geometry:(id)arg3 state:(id)arg4;
+ (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)mapStyleForPresentationName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (void)mapStyleForLabelName:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)mapStyleForLabelName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (void)map1dArrowStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)map1dArrowStyleToShape:(id)arg1 state:(id)arg2;
+ (void)mapStyleAndTextFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;

@end

