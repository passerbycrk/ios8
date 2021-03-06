/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSOperationQueue;

// Not exported
@interface _UIDocumentPickerContainerModel : NSObject
{
    int _sortOrder;
    NSArray *_pickableTypes;
    unsigned long long _pickerMode;
    NSMutableArray *_updateHandlers;
    NSOperationQueue *_thumbnailQueue;
}

@property(retain, nonatomic) NSOperationQueue *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;
@property(retain, nonatomic) NSMutableArray *updateHandlers; // @synthesize updateHandlers=_updateHandlers;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
@property(retain, nonatomic) NSArray *pickableTypes; // @synthesize pickableTypes=_pickableTypes;
- (void)updateSortDescriptors;
- (void)refreshItem:(id)arg1;
- (id)displayTitle;
- (void)stopMonitoringChanges;
- (void)startMonitoringChanges;
@property(readonly, nonatomic) NSArray *modelObjects;
- (void)removeUpdateHandler:(id)arg1;
- (id)addUpdateHandler:(id)arg1;
- (void)dealloc;
- (id)init;

@end

