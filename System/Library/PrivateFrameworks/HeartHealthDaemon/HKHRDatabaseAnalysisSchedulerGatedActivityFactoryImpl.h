//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface HKHRDatabaseAnalysisSchedulerGatedActivityFactoryImpl : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSObject<OS_os_log> *_loggingCategory;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b492
- (id)makeGatedActivityWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b3ed
- (id)initWithIdentifier:(id)arg1 loggingCategory:(id)arg2;	// IMP=0x000000000000b354

@end

