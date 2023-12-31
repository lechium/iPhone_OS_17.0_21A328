//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@interface MPSGraphInterleaveOp : MPSGraphOperation
{
    unsigned long long _interleaveFactor;	// 80 = 0x50
}

- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x00000000001cfebc
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 interleaveFactor:(unsigned long long)arg4 name:(id)arg5;	// IMP=0x00000000001cfe98

@end

