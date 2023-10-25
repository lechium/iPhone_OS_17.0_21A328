//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class NSArray;

@interface MPSGraphForLoopOp : MPSGraphOperation
{
    CDUnknownBlockType _bodyBlock;	// 80 = 0x50
    NSArray *_bodyResult;	// 88 = 0x58
    NSArray *_iterArgs;	// 96 = 0x60
    NSArray *_forBlockArguments;	// 104 = 0x68
    struct unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> _opData;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x00000000000aadb6
- (void).cxx_destruct;	// IMP=0x00000000000aad45
- (void)partialDerivateForCFOpWithAutodiff:(void *)arg1;	// IMP=0x00000000000aad26
- (_Bool)recurseOutFromBlockInput:(id)arg1 withAutodiff:(void *)arg2;	// IMP=0x00000000000aacc5
- (_Bool)recurseOnBlocksFromOutput:(id)arg1 withAutodiff:(void *)arg2;	// IMP=0x00000000000aac64
- (_Bool)recurseFromBlock:(id)arg1 onEscaped:(id)arg2 withAutodiff:(void *)arg3;	// IMP=0x00000000000aac51
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x00000000000aa558
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 bodyBlock:(CDUnknownBlockType)arg4 iterArgs:(id)arg5 name:(id)arg6;	// IMP=0x00000000000aa3d7

@end
