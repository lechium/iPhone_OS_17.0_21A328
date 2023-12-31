//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class MPSGraphTensor, NSArray;

@interface MPSGraphWhileOp : MPSGraphOperation
{
    CDUnknownBlockType _beforeBlock;	// 80 = 0x50
    CDUnknownBlockType _afterBlock;	// 88 = 0x58
    NSArray *_initInputTensors;	// 96 = 0x60
    NSArray *_beforeResult;	// 104 = 0x68
    NSArray *_afterResult;	// 112 = 0x70
    NSArray *_beforeBlockArguments;	// 120 = 0x78
    NSArray *_afterBlockArguments;	// 128 = 0x80
    MPSGraphTensor *_predicateTensor;	// 136 = 0x88
    MPSGraphTensor *_itersCountTensor;	// 144 = 0x90
    struct unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> _opData;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x00000000000aa3bf
- (void).cxx_destruct;	// IMP=0x00000000000aa2f9
- (void)partialDerivateForCFOpWithAutodiff:(void *)arg1;	// IMP=0x00000000000aa2da
- (_Bool)recurseOutFromBlockInput:(id)arg1 withAutodiff:(void *)arg2;	// IMP=0x00000000000aa279
- (_Bool)recurseOnBlocksFromOutput:(id)arg1 withAutodiff:(void *)arg2;	// IMP=0x00000000000aa218
- (_Bool)recurseFromBlock:(id)arg1 onEscaped:(id)arg2 withAutodiff:(void *)arg3;	// IMP=0x00000000000aa205
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x00000000000a8e8f
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 beforeBlock:(CDUnknownBlockType)arg4 afterBlock:(CDUnknownBlockType)arg5 name:(id)arg6;	// IMP=0x00000000000a8ce5

@end

