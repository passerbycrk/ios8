/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ContainerManagerProtocol
- (void)restoreContainerAtUrl:(id)arg1 containerClass:(long long)arg2 identifier:(id)arg3 info:(id)arg4 withReply:(id)arg5;
- (void)restoreContainerAtUrl:(id)arg1 withReply:(id)arg2;
- (void)metadataWithUUID:(id)arg1 identifier:(id)arg2 containerClass:(long long)arg3 withReply:(id)arg4;
- (void)infoValueForKey:(id)arg1 uuid:(id)arg2 identifier:(id)arg3 containerClass:(long long)arg4 withReply:(id)arg5;
- (void)setInfoValue:(id)arg1 forKey:(id)arg2 uuid:(id)arg3 identifier:(id)arg4 containerClass:(long long)arg5 withReply:(id)arg6;
- (void)deleteContainersOnDeathRowWithReply:(id)arg1;
- (void)stageForDeleteContainersWithUUIDStrings:(id)arg1 identifiers:(id)arg2 classes:(id)arg3 withReply:(id)arg4;
- (void)replaceContainer:(id)arg1 withContainer:(id)arg2 identifierOld:(id)arg3 identifierNew:(id)arg4 containerClassOld:(long long)arg5 containerClassNew:(long long)arg6 withReply:(id)arg7;
- (void)containersWithClass:(long long)arg1 temporary:(_Bool)arg2 withReply:(id)arg3;
- (void)createOrLookupContainerWithId:(id)arg1 createIfNecessary:(_Bool)arg2 containerClass:(long long)arg3 temporary:(_Bool)arg4 withReply:(id)arg5;
@end

