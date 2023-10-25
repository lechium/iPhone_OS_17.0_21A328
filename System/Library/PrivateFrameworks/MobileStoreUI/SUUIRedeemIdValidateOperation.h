//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SUUIRedeemIdValidateOperation : ISOperation
{
    CDUnknownBlockType _resultBlock;	// 96 = 0x60
    NSDictionary *_dictionary;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000150fbd
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)_logResultsForSuccess:(_Bool)arg1 failureReason:(id)arg2 failureMessage:(id)arg3 error:(id)arg4;	// IMP=0x0000000000150de7
- (id)_subOperation;	// IMP=0x0000000000150c73
- (void)operation:(id)arg1 selectedButton:(id)arg2;	// IMP=0x0000000000150c0c
- (void)_handleFailure:(id)arg1 serverDialogDictionary:(id)arg2;	// IMP=0x0000000000150b32
- (void)main;	// IMP=0x0000000000150856
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001507e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
