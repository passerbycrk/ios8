/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFileManager.h"

@interface NSFileManager (RCAdditions)
- (id)uniqueFileSystemURLWithPreferredURL:(id)arg1 uniquenessFormatString:(id)arg2;
- (_Bool)rc_isRestrictedByFileProtectionFromReadingAtPath:(id)arg1;
- (_Bool)rc_isRestrictedByFileProtectionFromWritingAtPath:(id)arg1;
- (_Bool)rc_isRestrictedByFileProtectionFromCreatingItemsInDirectory:(id)arg1;
- (long long)rc_dataProtectionKeyBagState;
@end

