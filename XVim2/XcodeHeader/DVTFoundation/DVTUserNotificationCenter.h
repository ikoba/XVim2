//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSUserNotificationCenterDelegate-Protocol.h>
#import <DVTFoundation/UNUserNotificationCenterDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface DVTUserNotificationCenter : NSObject <NSUserNotificationCenterDelegate, UNUserNotificationCenterDelegate>
{
    NSMutableDictionary *_handlers;
    NSMapTable *_requests;
    NSArray *_scheduledNotificationRequests;
    NSObject<UNUserNotificationCenterDelegate> *_proxyDelegate;
}

+ (id)defaultUserNotificationCenter;
- (void).cxx_destruct;
@property __weak NSObject<UNUserNotificationCenterDelegate> *proxyDelegate; // @synthesize proxyDelegate=_proxyDelegate;
@property(copy) NSArray *scheduledNotificationRequests; // @synthesize scheduledNotificationRequests=_scheduledNotificationRequests;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didRemoveDeliveredNotifications:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotification:(id)arg1;
- (void)deliverNotification:(id)arg1 withEventHandler:(CDUnknownBlockType)arg2;
- (void)deliverNotification:(id)arg1;
@property(readonly) NSArray *deliveredNotifications;
- (void)removeScheduledNotification:(id)arg1;
- (void)scheduleNotification:(id)arg1 withEventHandler:(CDUnknownBlockType)arg2;
- (void)scheduleNotification:(id)arg1;
@property(copy) NSArray *scheduledNotifications;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removeDeliveredNotificationRequest:(id)arg1;
- (void)scheduleNotificationRequest:(id)arg1 withEventHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

