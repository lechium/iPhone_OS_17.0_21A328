//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject
{
    NSXPCInterface *_interface;	// 8 = 0x8
    NSSet *_contextsSet;	// 16 = 0x10
    NSSet *_arraySet;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000260b0
- (void)configureInsightEventsAPI;	// IMP=0x0000000000025f54
- (void)configureRelayRequestAPI;	// IMP=0x0000000000025e75
- (void)configureSurveyAnswerAPI;	// IMP=0x0000000000025c18
- (void)configureAdminRequestAPI;	// IMP=0x0000000000025954
- (void)configureAssetSupportAPI;	// IMP=0x0000000000024f49
- (void)configureFeatureAvailabilityAPI;	// IMP=0x0000000000024c40
- (void)configureStudentActivityAPI;	// IMP=0x00000000000247e7
- (void)configureClassAPI;	// IMP=0x00000000000246f0
- (void)configureCollaborationStateAPI;	// IMP=0x000000000002436c
- (void)configureCollectionsAPI;	// IMP=0x00000000000242c8
- (void)configureHandoutAPI;	// IMP=0x00000000000241de
- (void)configureAuthorizationStatusAPI;	// IMP=0x0000000000023d14
- (void)configureUtilityServerAPI;	// IMP=0x0000000000023911
- (void)configureUserNotificationAPI;	// IMP=0x00000000000235f6
- (void)configureAppsAPI;	// IMP=0x000000000002346d
- (void)configureDashboardAppAPI;	// IMP=0x000000000002318c
- (void)configureProgressReportingAPI;	// IMP=0x0000000000023098
- (void)configureContextAPI;	// IMP=0x0000000000022db7
- (void)configureDataObserverAPI;	// IMP=0x0000000000022d21
- (void)configureSaveAPI;	// IMP=0x0000000000022c54
- (void)configureQueryAPI;	// IMP=0x0000000000022b9d
- (id)configureServerInterface;	// IMP=0x0000000000022a71
- (id)init;	// IMP=0x0000000000022949

@end
