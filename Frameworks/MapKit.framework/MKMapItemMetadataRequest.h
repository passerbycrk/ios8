/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MKMapItemMetadata, NSURL, NSURLRequest;

@interface MKMapItemMetadataRequest : NSObject
{
    MKMapItemMetadata *_businessMetadata;
}

@property(retain, nonatomic) MKMapItemMetadata *businessMetadata; // @synthesize businessMetadata=_businessMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLRequest *urlRequest;
@property(readonly, nonatomic) NSURL *url;
- (void)handleError:(id)arg1;
- (void)handleData:(id)arg1;

@end

