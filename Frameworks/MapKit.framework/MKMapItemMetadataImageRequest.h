/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKMapItemMetadataRequest.h>

@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest
{
    GEOPhotoInfo *_info;
    id _imageHandler;
}

+ (id)requestWithBusinessMetadata:(id)arg1 info:(id)arg2;
@property(copy, nonatomic) id imageHandler; // @synthesize imageHandler=_imageHandler;
@property(retain) GEOPhotoInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (void)handleData:(id)arg1;
- (id)url;

@end
