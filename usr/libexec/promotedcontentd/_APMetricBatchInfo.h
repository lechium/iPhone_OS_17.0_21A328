//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _APMetricBatchInfo : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    id _fileSystemToken;	// 16 = 0x10
    unsigned long long _metricsCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000dbcb4
@property(nonatomic) unsigned long long metricsCount; // @synthesize metricsCount=_metricsCount;
@property(retain, nonatomic) id fileSystemToken; // @synthesize fileSystemToken=_fileSystemToken;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

