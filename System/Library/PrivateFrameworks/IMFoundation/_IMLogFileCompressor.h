//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject
{
    NSMutableArray *_archivers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00100000000315b5
- (void).cxx_destruct;	// IMP=0x000000000003184b
- (void)fileCopierDidFinish:(id)arg1;	// IMP=0x000000000003178d
- (void)fileCopierDidStart:(id)arg1;	// IMP=0x0000000000031787
- (void)compressPath:(id)arg1 toPath:(id)arg2;	// IMP=0x0000000000031660
- (id)init;	// IMP=0x000000000003160a

@end

