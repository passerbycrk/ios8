/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class CKDPAssetUploadTokenRetrieveRequest, CKDPDeleteCommentRequest, CKDPDeleteContainerRequest, CKDPGetCommentRequest, CKDPGetCommentsRequest, CKDPGetLikesRequest, CKDPInvitationAcceptRequest, CKDPInvitationDeclineRequest, CKDPInvitationQueryRequest, CKDPLikeRequest, CKDPMescalSignatureRequest, CKDPNotificationMarkReadRequest, CKDPNotificationSyncRequest, CKDPOperation, CKDPPkiRegisterRequest, CKDPPkiRetrieveRequest, CKDPPostCommentRequest, CKDPPromoteContainerSchemaRequest, CKDPPulseRequest, CKDPQueryRetrieveRequest, CKDPRecordDeleteRequest, CKDPRecordRetrieveChangesRequest, CKDPRecordRetrieveRequest, CKDPRecordRetrieveVersionsRequest, CKDPRecordSaveRequest, CKDPRequestOperationHeader, CKDPResetContainerRequest, CKDPSetBadgeCountRequest, CKDPShareCreateRequest, CKDPShareDeleteRequest, CKDPShareParticipantCreateRequest, CKDPShareParticipantDeleteRequest, CKDPShareParticipantUpdateRequest, CKDPShareRetrieveRequest, CKDPShareSetKeyRequest, CKDPSubscriptionCreateRequest, CKDPSubscriptionDeleteRequest, CKDPSubscriptionRetrieveRequest, CKDPTokenRegistrationRequest, CKDPTokenUnregistrationRequest, CKDPUnlikeRequest, CKDPUserPrivacySettingsBatchLookupRequest, CKDPUserPrivacySettingsResetRequest, CKDPUserPrivacySettingsRetrieveRequest, CKDPUserPrivacySettingsUpdateRequest, CKDPUserQueryRequest, CKDPUserRetrieveRequest, CKDPZoneDeleteRequest, CKDPZoneRetrieveRequest, CKDPZoneSaveRequest;

@interface CKDPRequestOperation : PBCodable <NSCopying>
{
    CKDPAssetUploadTokenRetrieveRequest *_assetUploadTokenRetrieveRequest;
    CKDPDeleteCommentRequest *_deleteCommentRequest;
    CKDPDeleteContainerRequest *_deleteContainerRequest;
    CKDPGetCommentRequest *_getCommentRequest;
    CKDPGetCommentsRequest *_getCommentsRequest;
    CKDPGetLikesRequest *_getLikesRequest;
    CKDPRequestOperationHeader *_header;
    CKDPInvitationAcceptRequest *_invitationAcceptRequest;
    CKDPInvitationDeclineRequest *_invitationDeclineRequest;
    CKDPInvitationQueryRequest *_invitationQueryRequest;
    CKDPLikeRequest *_likeRequest;
    CKDPMescalSignatureRequest *_mescalSignatureRequest;
    CKDPNotificationMarkReadRequest *_notificationMarkReadRequest;
    CKDPNotificationSyncRequest *_notificationSyncRequest;
    CKDPPkiRegisterRequest *_pkiRegisterRequest;
    CKDPPkiRetrieveRequest *_pkiRetrieveRequest;
    CKDPPostCommentRequest *_postCommentRequest;
    CKDPPromoteContainerSchemaRequest *_promoteContainerSchemaRequest;
    CKDPPulseRequest *_pulseRequest;
    CKDPQueryRetrieveRequest *_queryRetrieveRequest;
    CKDPRecordDeleteRequest *_recordDeleteRequest;
    CKDPRecordRetrieveChangesRequest *_recordRetrieveChangesRequest;
    CKDPRecordRetrieveRequest *_recordRetrieveRequest;
    CKDPRecordRetrieveVersionsRequest *_recordRetrieveVersionsRequest;
    CKDPRecordSaveRequest *_recordSaveRequest;
    CKDPOperation *_request;
    CKDPResetContainerRequest *_resetContainerRequest;
    CKDPSetBadgeCountRequest *_setBadgeCountRequest;
    CKDPShareCreateRequest *_shareCreateRequest;
    CKDPShareDeleteRequest *_shareDeleteRequest;
    CKDPShareParticipantCreateRequest *_shareParticipantCreateRequest;
    CKDPShareParticipantDeleteRequest *_shareParticipantDeleteRequest;
    CKDPShareParticipantUpdateRequest *_shareParticipantUpdateRequest;
    CKDPShareRetrieveRequest *_shareRetrieveRequest;
    CKDPShareSetKeyRequest *_shareSetKeyRequest;
    CKDPSubscriptionCreateRequest *_subscriptionCreateRequest;
    CKDPSubscriptionDeleteRequest *_subscriptionDeleteRequest;
    CKDPSubscriptionRetrieveRequest *_subscriptionRetrieveRequest;
    CKDPTokenRegistrationRequest *_tokenRegistrationRequest;
    CKDPTokenUnregistrationRequest *_tokenUnregistrationRequest;
    CKDPUnlikeRequest *_unlikeRequest;
    CKDPUserPrivacySettingsBatchLookupRequest *_userPrivacySettingsBatchLookupRequest;
    CKDPUserPrivacySettingsResetRequest *_userPrivacySettingsResetRequest;
    CKDPUserPrivacySettingsRetrieveRequest *_userPrivacySettingsRetrieveRequest;
    CKDPUserPrivacySettingsUpdateRequest *_userPrivacySettingsUpdateRequest;
    CKDPUserQueryRequest *_userQueryRequest;
    CKDPUserRetrieveRequest *_userRetrieveRequest;
    CKDPZoneDeleteRequest *_zoneDeleteRequest;
    CKDPZoneRetrieveRequest *_zoneRetrieveRequest;
    CKDPZoneSaveRequest *_zoneSaveRequest;
}

@property(retain, nonatomic) CKDPMescalSignatureRequest *mescalSignatureRequest; // @synthesize mescalSignatureRequest=_mescalSignatureRequest;
@property(retain, nonatomic) CKDPOperation *request; // @synthesize request=_request;
@property(retain, nonatomic) CKDPRequestOperationHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMescalSignatureRequest;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasHeader;
@property(retain, nonatomic) CKDPZoneSaveRequest *zoneSaveRequest;
@property(readonly, nonatomic) _Bool hasZoneSaveRequest;
@property(retain, nonatomic) CKDPZoneRetrieveRequest *zoneRetrieveRequest;
@property(readonly, nonatomic) _Bool hasZoneRetrieveRequest;
@property(retain, nonatomic) CKDPZoneDeleteRequest *zoneDeleteRequest;
@property(readonly, nonatomic) _Bool hasZoneDeleteRequest;
@property(retain, nonatomic) CKDPRecordSaveRequest *recordSaveRequest;
@property(readonly, nonatomic) _Bool hasRecordSaveRequest;
@property(retain, nonatomic) CKDPRecordRetrieveRequest *recordRetrieveRequest;
@property(readonly, nonatomic) _Bool hasRecordRetrieveRequest;
@property(retain, nonatomic) CKDPRecordRetrieveVersionsRequest *recordRetrieveVersionsRequest;
@property(readonly, nonatomic) _Bool hasRecordRetrieveVersionsRequest;
@property(retain, nonatomic) CKDPRecordRetrieveChangesRequest *recordRetrieveChangesRequest;
@property(readonly, nonatomic) _Bool hasRecordRetrieveChangesRequest;
@property(retain, nonatomic) CKDPRecordDeleteRequest *recordDeleteRequest;
@property(readonly, nonatomic) _Bool hasRecordDeleteRequest;
@property(retain, nonatomic) CKDPQueryRetrieveRequest *queryRetrieveRequest;
@property(readonly, nonatomic) _Bool hasQueryRetrieveRequest;
@property(retain, nonatomic) CKDPAssetUploadTokenRetrieveRequest *assetUploadTokenRetrieveRequest;
@property(readonly, nonatomic) _Bool hasAssetUploadTokenRetrieveRequest;
@property(retain, nonatomic) CKDPDeleteContainerRequest *deleteContainerRequest;
@property(readonly, nonatomic) _Bool hasDeleteContainerRequest;
@property(retain, nonatomic) CKDPResetContainerRequest *resetContainerRequest;
@property(readonly, nonatomic) _Bool hasResetContainerRequest;
@property(retain, nonatomic) CKDPPromoteContainerSchemaRequest *promoteContainerSchemaRequest;
@property(readonly, nonatomic) _Bool hasPromoteContainerSchemaRequest;
@property(retain, nonatomic) CKDPPostCommentRequest *postCommentRequest;
@property(readonly, nonatomic) _Bool hasPostCommentRequest;
@property(retain, nonatomic) CKDPGetCommentsRequest *getCommentsRequest;
@property(readonly, nonatomic) _Bool hasGetCommentsRequest;
@property(retain, nonatomic) CKDPGetCommentRequest *getCommentRequest;
@property(readonly, nonatomic) _Bool hasGetCommentRequest;
@property(retain, nonatomic) CKDPDeleteCommentRequest *deleteCommentRequest;
@property(readonly, nonatomic) _Bool hasDeleteCommentRequest;
@property(retain, nonatomic) CKDPLikeRequest *likeRequest;
@property(readonly, nonatomic) _Bool hasLikeRequest;
@property(retain, nonatomic) CKDPUnlikeRequest *unlikeRequest;
@property(readonly, nonatomic) _Bool hasUnlikeRequest;
@property(retain, nonatomic) CKDPGetLikesRequest *getLikesRequest;
@property(readonly, nonatomic) _Bool hasGetLikesRequest;
@property(retain, nonatomic) CKDPPulseRequest *pulseRequest;
@property(readonly, nonatomic) _Bool hasPulseRequest;
@property(retain, nonatomic) CKDPShareCreateRequest *shareCreateRequest;
@property(readonly, nonatomic) _Bool hasShareCreateRequest;
@property(retain, nonatomic) CKDPShareRetrieveRequest *shareRetrieveRequest;
@property(readonly, nonatomic) _Bool hasShareRetrieveRequest;
@property(retain, nonatomic) CKDPShareDeleteRequest *shareDeleteRequest;
@property(readonly, nonatomic) _Bool hasShareDeleteRequest;
@property(retain, nonatomic) CKDPShareSetKeyRequest *shareSetKeyRequest;
@property(readonly, nonatomic) _Bool hasShareSetKeyRequest;
@property(retain, nonatomic) CKDPShareParticipantCreateRequest *shareParticipantCreateRequest;
@property(readonly, nonatomic) _Bool hasShareParticipantCreateRequest;
@property(retain, nonatomic) CKDPShareParticipantUpdateRequest *shareParticipantUpdateRequest;
@property(readonly, nonatomic) _Bool hasShareParticipantUpdateRequest;
@property(retain, nonatomic) CKDPShareParticipantDeleteRequest *shareParticipantDeleteRequest;
@property(readonly, nonatomic) _Bool hasShareParticipantDeleteRequest;
@property(retain, nonatomic) CKDPInvitationAcceptRequest *invitationAcceptRequest;
@property(readonly, nonatomic) _Bool hasInvitationAcceptRequest;
@property(retain, nonatomic) CKDPInvitationDeclineRequest *invitationDeclineRequest;
@property(readonly, nonatomic) _Bool hasInvitationDeclineRequest;
@property(retain, nonatomic) CKDPInvitationQueryRequest *invitationQueryRequest;
@property(readonly, nonatomic) _Bool hasInvitationQueryRequest;
@property(retain, nonatomic) CKDPSubscriptionCreateRequest *subscriptionCreateRequest;
@property(readonly, nonatomic) _Bool hasSubscriptionCreateRequest;
@property(retain, nonatomic) CKDPSubscriptionRetrieveRequest *subscriptionRetrieveRequest;
@property(readonly, nonatomic) _Bool hasSubscriptionRetrieveRequest;
@property(retain, nonatomic) CKDPSubscriptionDeleteRequest *subscriptionDeleteRequest;
@property(readonly, nonatomic) _Bool hasSubscriptionDeleteRequest;
@property(retain, nonatomic) CKDPUserRetrieveRequest *userRetrieveRequest;
@property(readonly, nonatomic) _Bool hasUserRetrieveRequest;
@property(retain, nonatomic) CKDPUserQueryRequest *userQueryRequest;
@property(readonly, nonatomic) _Bool hasUserQueryRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsUpdateRequest *userPrivacySettingsUpdateRequest;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsUpdateRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsResetRequest *userPrivacySettingsResetRequest;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsResetRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsBatchLookupRequest *userPrivacySettingsBatchLookupRequest;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsBatchLookupRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsRetrieveRequest *userPrivacySettingsRetrieveRequest;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsRetrieveRequest;
@property(retain, nonatomic) CKDPTokenRegistrationRequest *tokenRegistrationRequest;
@property(readonly, nonatomic) _Bool hasTokenRegistrationRequest;
@property(retain, nonatomic) CKDPTokenUnregistrationRequest *tokenUnregistrationRequest;
@property(readonly, nonatomic) _Bool hasTokenUnregistrationRequest;
@property(retain, nonatomic) CKDPSetBadgeCountRequest *setBadgeCountRequest;
@property(readonly, nonatomic) _Bool hasSetBadgeCountRequest;
@property(retain, nonatomic) CKDPNotificationSyncRequest *notificationSyncRequest;
@property(readonly, nonatomic) _Bool hasNotificationSyncRequest;
@property(retain, nonatomic) CKDPNotificationMarkReadRequest *notificationMarkReadRequest;
@property(readonly, nonatomic) _Bool hasNotificationMarkReadRequest;
@property(retain, nonatomic) CKDPPkiRegisterRequest *pkiRegisterRequest;
@property(readonly, nonatomic) _Bool hasPkiRegisterRequest;
@property(retain, nonatomic) CKDPPkiRetrieveRequest *pkiRetrieveRequest;
@property(readonly, nonatomic) _Bool hasPkiRetrieveRequest;

@end

