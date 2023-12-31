//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLLocationInternalClient_CoreMotion : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)sharedServiceClient;	// IMP=0x00600000001fdf62
- (void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6;	// IMP=0x0000000000205815
- (void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3;	// IMP=0x00000000002057d0
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long *)arg1 oscarTimeStamp:(unsigned long long *)arg2;	// IMP=0x000000000020556c
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int *)arg1;	// IMP=0x0000000000205492
- (unsigned char)setBackgroundIndicatorForBundleID:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2 enabled:(unsigned char)arg3;	// IMP=0x00000000002053a5
- (unsigned char)setLocationButtonUseMode:(int)arg1 forBundleID:(struct __CFString *)arg2 orBundlePath:(struct __CFString *)arg3;	// IMP=0x00000000002052bd
- (unsigned char)setIncidentalUseMode:(int)arg1 forBundleID:(struct __CFString *)arg2 orBundlePath:(struct __CFString *)arg3;	// IMP=0x00000000002051d5
- (unsigned char)updatePromptedLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x00000000002050fc
- (unsigned char)updatePillButtonChoiceForOutstandingPrompt:(int)arg1;	// IMP=0x000000000020502e
- (unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 andZoneIdentifier:(struct __CFString *)arg3 andSubIdentityIdentifier:(struct __CFString *)arg4 forBundleID:(struct __CFString *)arg5 orBundlePath:(struct __CFString *)arg6;	// IMP=0x0000000000204f29
- (struct __CFArray *)copyActivityAlarms;	// IMP=0x0000000000204e52
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(struct __CFString *)arg2 orBundlePath:(struct __CFString *)arg3 orAuditToken:(CDStruct_6ad76789)arg4 byLocationButton:(unsigned char)arg5 voiceInteractionEnabled:(unsigned char)arg6;	// IMP=0x0000000000204d30
- (id)getAccessoryMotionSensorLogs;	// IMP=0x0000000000204d17
- (id)getMotionSensorLogs;	// IMP=0x0000000000204cfe
- (unsigned char)getGyroCalibrationDatabaseBiasFit:(CDStruct_1ec9dfc5 *)arg1 atTemperature:(float)arg2;	// IMP=0x0000000000204bfa
- (id)getPipelinedCache;	// IMP=0x0000000000204ab5
- (int)getStatusBarIconState;	// IMP=0x00000000002049ec
- (unsigned char)getStatusBarIconEnabled:(_Bool *)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x00000000002047b0
- (unsigned char)setStatusBarIconEnabled:(_Bool)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x000000000020457c
- (unsigned char)copyLastLog;	// IMP=0x000000000020431f
- (id)getOdometryBatchedLocations;	// IMP=0x0000000000203d52
- (int)getAccessoryPASCDTransmissionState;	// IMP=0x0000000000203940
- (int)getAccessoryTypeBitSet;	// IMP=0x000000000020352e
- (void)setTrackRunHint:(CDStruct_dce2ee30 *)arg1;	// IMP=0x00000000002031cc
- (void)setMapMatchingRouteHint:(CDStruct_b7b5e951 *)arg1 count:(int)arg2 routingType:(int)arg3 stepType:(int)arg4;	// IMP=0x0000000000202c9d
- (unsigned char)getGroundAltitudeForBundleID:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2 location:(id)arg3 groundAltitude:(CDStruct_b141a4d0 *)arg4;	// IMP=0x0000000000202b7d
- (unsigned char)getLocationForBundleID:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(CDStruct_7cf4616f *)arg5;	// IMP=0x0000000000202a48
- (_Bool)deleteInterestZoneWithId:(id)arg1 registeredForBundleId:(id)arg2 orBundlePath:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002028ba
- (_Bool)setRelevance:(_Bool)arg1 forInterestZoneWithId:(id)arg2 registeredForBundleId:(id)arg3 orBundlePath:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000202720
- (_Bool)registerPhenolicInterestZoneWithId:(id)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundleId:(id)arg5 orBundlePath:(id)arg6 error:(id *)arg7;	// IMP=0x0000000000202575
- (_Bool)registerCircularInterestZoneWithId:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundleId:(id)arg7 orBundlePath:(id)arg8 error:(id *)arg9;	// IMP=0x00000000002023ac
- (_Bool)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000202117
- (struct __CFDictionary *)copyMonitoredRegionsForBundleIdentifier:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2;	// IMP=0x0000000000202027
- (unsigned char)dumpLogs:(struct __CFString *)arg1;	// IMP=0x0000000000201dc3
- (unsigned char)displayStatistics;	// IMP=0x0000000000201b66
- (unsigned char)shutdownDaemon;	// IMP=0x000000000020190c
- (unsigned char)performMigration;	// IMP=0x00000000002016af
- (unsigned char)getPrecisionPermission:(char *)arg1 forBundleID:(struct __CFString *)arg2 orBundlePath:(struct __CFString *)arg3;	// IMP=0x00000000002013c7
- (unsigned char)getAuthorizationStatus:(int *)arg1 forBundleID:(struct __CFString *)arg2 orBundlePath:(struct __CFString *)arg3;	// IMP=0x00000000002012d5
- (unsigned char)getAuthorizationStatusForApp:(int *)arg1 withAuditToken:(CDStruct_6ad76789)arg2;	// IMP=0x00000000002011e7
- (unsigned char)getGestureServiceEnabled:(char *)arg1;	// IMP=0x0000000000201100
- (void)setGestureServiceEnabled:(unsigned char)arg1;	// IMP=0x0000000000200f43
- (id)triggerExpiredAuthorizationPurgeOnClientManager;	// IMP=0x0000000000200d0c
- (double)modifyOrSetAuthorizationTime:(double)arg1 forBundleID:(id)arg2 orBundlePath:(id)arg3;	// IMP=0x0000000000200ab7
- (id)getTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000200826
- (id)setTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 statusData:(id)arg3;	// IMP=0x000000000020053e
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)arg1;	// IMP=0x0000000000200457
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1;	// IMP=0x00000000002001d4
- (unsigned char)getLocationServicesEnabled:(char *)arg1;	// IMP=0x00000000002000e9
- (void)setLocationServicesEnabled:(unsigned char)arg1;	// IMP=0x00000000001fff0e
- (unsigned char)pingDaemon;	// IMP=0x00000000001ffe49
- (unsigned char)getPrivateMode;	// IMP=0x00000000001ffd82
- (void)setPrivateMode:(unsigned char)arg1;	// IMP=0x00000000001ffbc5
- (id)timeZoneAtLocation:(id)arg1;	// IMP=0x00000000001ff9a5
- (void *)getLocationDefaultForKey:(struct __CFString *)arg1;	// IMP=0x00000000001ff7ad
- (void)setLocationDefaultForKey:(struct __CFString *)arg1 value:(void *)arg2;	// IMP=0x00000000001ff40b
- (struct __CFArray *)copyGnssBandsInUse;	// IMP=0x00000000001ff32f
- (struct __CFDictionary *)copyZaxisStats;	// IMP=0x00000000001ff253
- (struct __CFString *)copyMicroLocationInternalVersion;	// IMP=0x00000000001ff177
- (struct __CFArray *)copyTechnologiesInUse;	// IMP=0x00000000001ff09b
- (struct __CFDictionary *)copyActiveClientsUsingLocation;	// IMP=0x00000000001fefac
- (struct __CFDictionary *)copyAppsUsingLocation;	// IMP=0x00000000001feebd
- (id)applyArchivedAuthorizationDecisions:(id)arg1;	// IMP=0x00000000001fecc8
- (id)getArchivedAuthorizationDecisionsWithError:(id *)arg1;	// IMP=0x00000000001fea73
- (unsigned char)clearLocationAuthorizations;	// IMP=0x00000000001fe9ae
- (void)clearLocationAuthorizationForBundleId:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2;	// IMP=0x00000000001fe8de
- (unsigned char)reportLocationUtilityEvent:(int)arg1 atDate:(struct __CFDate *)arg2;	// IMP=0x00000000001fe804
- (unsigned char)getIncidentalUseMode:(int *)arg1 forBundleID:(struct __CFString *)arg2 orBundlePath:(struct __CFString *)arg3;	// IMP=0x00000000001fe712
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(struct __CFString *)arg3 orBundlePath:(struct __CFString *)arg4;	// IMP=0x00000000001fe61a
- (id)synchronousRemoteObject;	// IMP=0x00000000001fe408
- (id)connection;	// IMP=0x00000000001fdfa7

@end

