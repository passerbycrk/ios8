/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSManagedObjectID, NSString, PHPhotoLibrary;

@interface PHObject : NSObject <NSCopying>
{
    _Bool _deleted;
    NSString *_uuid;
    NSManagedObjectID *_objectID;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _propertyHint;
}

+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsBursts;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
@property unsigned long long propertyHint; // @synthesize propertyHint=_propertyHint;
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
- (void).cxx_destruct;
- (id)description;
@property(readonly, getter=isTransient) _Bool transient;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_identifier;
- (Class)changeRequestClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_shortObjectIDURI;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

