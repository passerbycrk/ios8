/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBCDomainSyncServiceProtocol <NSObject>
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(id)arg1;
- (oneway void)savePlaybackPositionEntity:(id)arg1 isCheckpoint:(_Bool)arg2;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)beginAccessingPlaybackPositionEntities;
@end

