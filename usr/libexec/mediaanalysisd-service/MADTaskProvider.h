//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MADTaskProvider : NSObject
{
}

+ (unsigned long long)taskID;	// IMP=0x00400000000ec04a
- (void)retireTask:(id)arg1;	// IMP=0x00400000000ec097
- (id)nextClusterProcessingTask;	// IMP=0x00100000000ec08f
- (id)nextDownloadAssetProcessingTask;	// IMP=0x00100000000ec087
- (id)nextAssetProcessingTask;	// IMP=0x00100000000ec07f
- (unsigned long long)iterations;	// IMP=0x00100000000ec074
- (unsigned long long)priority;	// IMP=0x00100000000ec06c
- (unsigned long long)taskID;	// IMP=0x00100000000ec052

@end

