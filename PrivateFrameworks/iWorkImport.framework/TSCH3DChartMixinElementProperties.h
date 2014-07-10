/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartElementProperties.h>

// Not exported
@interface TSCH3DChartMixinElementProperties : TSCH3DChartElementProperties
{
    TSCH3DChartElementProperties *mOriginal;
}

+ (id)propertiesWithProperties:(id)arg1;
- (id)texcoordsForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)normalsForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (struct GeometryResource)boundsGeometryForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (struct GeometryResource)geometryForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)renderingLightingModelForSeries:(id)arg1;
- (_Bool)applyElementTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;
- (float)elementTransformDepthFromPropertyAccessor:(const struct ChartScenePropertyAccessor *)arg1;
- (void)applyChartElementsTransform:(struct ObjectTransforms *)arg1;
- (id)elementsTransform;
- (id)chartTransform;
- (id)labels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;
- (id)getPropertiesOfType:(Class)arg1;

@end
