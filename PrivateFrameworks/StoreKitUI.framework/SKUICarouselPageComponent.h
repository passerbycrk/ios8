/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIPageComponent.h>

#import "SSMetricsEventFieldProvider-Protocol.h"

@class NSArray, SKUICarouselViewElement;

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider>
{
    NSArray *_carouselItems;
    double _cycleInterval;
    long long _missingItemCount;
}

@property(readonly, nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(readonly, nonatomic) NSArray *carouselItems; // @synthesize carouselItems=_carouselItems;
- (void).cxx_destruct;
- (id)valueForMetricsField:(id)arg1;
- (id)metricsElementName;
- (_Bool)isMissingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id)arg2;
- (long long)componentType;
- (void)updateWithMissingItems:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;

// Remaining properties
@property(readonly, nonatomic) SKUICarouselViewElement *viewElement; // @dynamic viewElement;

@end
