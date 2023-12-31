//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarouselPreferenceServices/NSObject-Protocol.h>

@class BBSectionInfo, LSApplicationRecord, NSArray, NSString, NSURL;
@protocol CSLPRFApplication;

@protocol CSLPRFApplication <NSObject>
@property(readonly, nonatomic) BBSectionInfo *bbSectionInfo;
@property(readonly, nonatomic) _Bool isBBSourcedApplication;
@property(readonly, nonatomic) _Bool isRemovedSystemApp;
@property(readonly, nonatomic) __weak LSApplicationRecord *applicationRecord;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
@property(readonly, copy, nonatomic) NSArray *counterpartIdentifiers;
@property(readonly, nonatomic) _Bool defaultsToPrivateAlwaysOnDisplayTreatment;
@property(readonly, nonatomic) _Bool supportsAlwaysOnDisplay;
@property(readonly, copy, nonatomic) NSString *SDKVersion;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (long long)compare:(id <CSLPRFApplication>)arg1;
@end

