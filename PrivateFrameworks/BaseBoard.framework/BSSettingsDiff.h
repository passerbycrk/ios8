/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BSXPCCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class BSMutableSettings, NSHashTable;

@interface BSSettingsDiff : NSObject <NSCopying, BSXPCCoding>
{
    id <BSSettingDescriptionProvider> _descriptionProvider;
    BSMutableSettings *_changes;
    NSHashTable *_flagRemovals;
    NSHashTable *_objectRemovals;
}

+ (id)_newHashTableWithInitialCapacity:(unsigned long long)arg1;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
- (id)description;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)arg1;
- (id)allSettings;
- (void)_enumerateSettingsInTable:(id)arg1 withBlock:(id)arg2;
- (id)descriptionOfSettingsWithMultilinePrefix:(id)arg1 providerBlock:(id)arg2;
- (void)inspectChangesWithBlock:(id)arg1;
- (void)applyToSettings:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3;

@end
