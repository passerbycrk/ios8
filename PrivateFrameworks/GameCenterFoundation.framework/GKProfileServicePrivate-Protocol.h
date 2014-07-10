/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GKProfileService-Protocol.h"

@protocol GKProfileServicePrivate <GKProfileService>
- (oneway void)changeAlias:(id)arg1 handler:(id)arg2;
- (oneway void)checkAliasForUniqueness:(id)arg1 handler:(id)arg2;
- (oneway void)setFindable:(_Bool)arg1 handler:(id)arg2;
- (oneway void)deleteEmail:(id)arg1 handler:(id)arg2;
- (oneway void)updateContactsWithHandler:(id)arg1;
- (oneway void)deletePhotoWithHandler:(id)arg1;
- (oneway void)setPhotoData:(id)arg1 handler:(id)arg2;
- (oneway void)cachePhotos:(id)arg1 handler:(id)arg2;
- (oneway void)addEmail:(id)arg1 handler:(id)arg2;
- (oneway void)setStatus:(id)arg1 handler:(id)arg2;
@end
