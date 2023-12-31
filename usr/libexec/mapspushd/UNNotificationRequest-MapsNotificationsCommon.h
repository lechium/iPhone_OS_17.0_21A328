//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotifications/UNNotificationRequest.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface UNNotificationRequest (MapsNotificationsCommon)
+ (id)requestForUpcomingOfflineMapsExpirationUnlessUpdatedByDate:(id)arg1;	// IMP=0x0010000000024aa0
+ (id)requestForExpiredOfflineMapsWithIdentifiers:(id)arg1 displayNames:(id)arg2 dueToNotBeingUpdatedWithinTimeInterval:(double)arg3;	// IMP=0x0010000000024688
+ (id)requestForOfflineUnsupportedExpirationWithIdentifiers:(id)arg1 displayNames:(id)arg2 isOSVersionUnsupported:(_Bool)arg3;	// IMP=0x00100000000244d6
+ (id)requestForExpiredOfflineMapsWithIdentifiers:(id)arg1 displayNames:(id)arg2 dueToNotBeingUsedWithinTimeInterval:(double)arg3;	// IMP=0x0010000000024018
+ (id)requestForDownloadedOfflineMapWithIdentifier:(id)arg1 displayName:(id)arg2;	// IMP=0x0010000000023d34
+ (id)_requestForSharedTripIdentifier:(id)arg1 state:(id)arg2 title:(id)arg3 subtitle:(id)arg4 message:(id)arg5 isUpdate:(_Bool)arg6;	// IMP=0x0010000000023988
+ (id)requestForArrivingSharedTripIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x00100000000238b9
+ (id)requestForResumeSharedTripIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x00100000000237ea
+ (id)requestForIntermediateStopSharedTripIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x001000000002371b
+ (id)requestForChargingStopSharedTripIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x001000000002364c
+ (id)requestForUpdatingSharedTripIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x001000000002357d
+ (id)requestForSharedTripIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x00100000000234ae
+ (id)requestForClearedPhotoAttributionNotificationWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x00100000000232c2
+ (id)requestForSubmittedPhotosWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x00100000000231aa
+ (id)requestForRAPStatusChangeNotification:(id)arg1;	// IMP=0x0010000000022f14
+ (id)requestForFixedRAP:(id)arg1;	// IMP=0x0010000000022bd7
+ (id)requestForPushedBookmark:(id)arg1;	// IMP=0x001000000002261d
+ (id)requestForPredictedRouteTrafficIncidentNotificationWithCommuteDetails:(id)arg1;	// IMP=0x001000000002236c
+ (id)requestForTrafficIncidentAlertWithID:(id)arg1 withReroute:(_Bool)arg2 title:(id)arg3 description:(id)arg4;	// IMP=0x001000000002219f
+ (id)requestForVenueNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x001000000002206b
+ (id)requestForAirportArrivalNotificationWithTitle:(id)arg1 message:(id)arg2 mapRegion:(id)arg3 regionName:(id)arg4;	// IMP=0x0010000000021d42
+ (id)requestForMapsSuggestionsNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000021c0e
+ (id)requestForLowFuelAlertNotificationWithDetails:(id)arg1;	// IMP=0x0010000000021909
+ (id)requestForParkedCarNotificationForEvent:(id)arg1 replacingEvent:(id)arg2;	// IMP=0x00100000000212fd
+ (id)requestForParkedCarNotificationForEvent:(id)arg1 mapItem:(id)arg2;	// IMP=0x0010000000020a3d
+ (id)requestForGeoDInternalNotificationWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00100000000209f0
+ (id)requestForProxyAuthFailedNotificationWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x0010000000020915
+ (id)requestForAnnouncement:(id)arg1;	// IMP=0x0010000000020518
+ (id)requestWithContent:(id)arg1 destinations:(unsigned long long)arg2;	// IMP=0x00100000000203a9
+ (id)_contentWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 url:(id)arg5 date:(id)arg6 expirationDate:(id)arg7 categoryIdentifier:(id)arg8 interruptionLevel:(unsigned long long)arg9 shouldIgnoreDoNotDisturb:(_Bool)arg10;	// IMP=0x0010000000020066
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 url:(id)arg6 date:(id)arg7 expirationDate:(id)arg8 categoryIdentifier:(id)arg9 interruptionLevel:(unsigned long long)arg10 shouldIgnoreDoNotDisturb:(_Bool)arg11;	// IMP=0x001000000001ffd4
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 url:(id)arg6 date:(id)arg7 expirationDate:(id)arg8 categoryIdentifier:(id)arg9 threadIdentifier:(id)arg10 interruptionLevel:(unsigned long long)arg11 shouldIgnoreDoNotDisturb:(_Bool)arg12;	// IMP=0x001000000001fee0
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 categoryIdentifier:(id)arg6 interruptionLevel:(unsigned long long)arg7 shouldIgnoreDoNotDisturb:(_Bool)arg8;	// IMP=0x001000000001fe99
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 url:(id)arg6 expirationDate:(id)arg7 categoryIdentifier:(id)arg8 threadIdentifier:(id)arg9 interruptionLevel:(unsigned long long)arg10 shouldIgnoreDoNotDisturb:(_Bool)arg11;	// IMP=0x001000000001fe53
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 destinations:(unsigned long long)arg5 url:(id)arg6 categoryIdentifier:(id)arg7 interruptionLevel:(unsigned long long)arg8 shouldIgnoreDoNotDisturb:(_Bool)arg9;	// IMP=0x001000000001fe17
+ (id)requestWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 userInfo:(id)arg4 interruptionLevel:(unsigned long long)arg5 shouldIgnoreDoNotDisturb:(_Bool)arg6;	// IMP=0x001000000001fdd4
- (_Bool)shouldShowIfAppInForeground;	// IMP=0x0010000000004863
@property(readonly) NSNumber *announcementDestinations;
@property(readonly) NSNumber *announcementType;
@property(readonly) NSNumber *announcementId;
@property(readonly) long long type;
- (id)contextValueForKey:(id)arg1;	// IMP=0x0010000000004511
@property(readonly) NSString *sharedTripTransportTypeString;
@property(readonly) NSString *sharedTripIdentifier;
@property(readonly) NSString *fixedRAPProblemStatusStateString;
@property(readonly) NSNumber *trafficIncidentAlert;
@property(readonly) NSData *trafficIncidentAlertID;
@property(readonly) NSUUID *parkedCarIdentifier;
@end

