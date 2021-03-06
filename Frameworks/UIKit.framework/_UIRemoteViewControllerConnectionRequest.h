/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSError, NSObject<OS_dispatch_queue>, NSString, NSUUID, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, _UIRemoteViewService;

// Not exported
@interface _UIRemoteViewControllerConnectionRequest : NSObject
{
    _UIRemoteViewService *_service;
    id _handler;
    NSString *_viewServiceBundleIdentifier;
    NSString *_viewControllerClassName;
    NSUUID *_contextToken;
    NSArray *_serializedAppearanceCustomizations;
    _Bool _legacyAppearance;
    id _exportedHostingObject;
    Class _remoteViewControllerClass;
    id <_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;
    _UIRemoteViewControllerConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isCancelledOrComplete;
    NSError *_error;
    _UIAsyncInvocation *_requestCancellationInvocation;
}

+ (id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 legacyAppearance:(_Bool)arg3 exportedHostingObject:(id)arg4 remoteViewControllerClass:(Class)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(id)arg7;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 legacyAppearance:(_Bool)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(id)arg7;
- (id)_cancelWithError:(id)arg1;
- (void)_didFinishEstablishingConnection;
- (void)_connectToViewControllerControlMessageDeputy;
- (void)_connectToServiceViewController;
- (void)_sendServiceTextEffectsRequest;
- (void)_connectToTextEffectsOperator;
- (void)_sendServiceViewControllerRequest;
- (void)_connectToViewControllerOperator;
- (void)_connectToPlugInKitService;
- (void)_connectToViewService;
- (void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(id)arg3;
- (void)_cancelUnconditionallyThen:(id)arg1;
- (void)dealloc;

@end

