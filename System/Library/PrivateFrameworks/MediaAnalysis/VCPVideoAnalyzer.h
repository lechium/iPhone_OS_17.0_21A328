//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPVideoAnalyzer : NSObject
{
}

+ (unsigned long long)dependencies;	// IMP=0x00800000002f9057
- (id)results;	// IMP=0x00000000002f9075
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x00000000002f906a
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x00000000002f905f

@end

