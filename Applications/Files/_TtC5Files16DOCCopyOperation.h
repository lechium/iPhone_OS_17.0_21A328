//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPCopyOperation.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface _TtC5Files16DOCCopyOperation : FPCopyOperation
{
    MISSING_TYPE *sourceURLs;	// 8 = 0x8
    MISSING_TYPE *sourceItems;	// 16 = 0x10
    MISSING_TYPE *destinationFolderItem;	// 24 = 0x18
    MISSING_TYPE *allowDSCopyEngine;	// 32 = 0x20
    MISSING_TYPE *dsTransferResults;	// 40 = 0x28
    MISSING_TYPE *dsSourceItemToURL;	// 48 = 0x30
    MISSING_TYPE *dsSourceURLToItem;	// 56 = 0x38
    MISSING_TYPE *dsItemIDToPlaceholderID;	// 64 = 0x40
    MISSING_TYPE *undoManager;	// 72 = 0x48
    MISSING_TYPE *engineTypeUsed;	// 80 = 0x50
    MISSING_TYPE *isDuplication;	// 81 = 0x51
}

- (void).cxx_destruct;	// IMP=0x004000000022a610
- (id)initWithSourceURLsAndNames:(id)arg1 destinationFolder:(id)arg2;	// IMP=0x001000000022a580
- (id)initWithSourceURLs:(id)arg1 destinationFolder:(id)arg2;	// IMP=0x001000000022a560
- (id)initWithItems:(id)arg1 destinationURL:(id)arg2;	// IMP=0x001000000022a500
- (id)initWithURLs:(id)arg1 destinationFolder:(id)arg2;	// IMP=0x001000000022a4e0
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;	// IMP=0x001000000022a4c0
- (void)registerUndo;	// IMP=0x0010000000229e60
- (id)operationForUndoing;	// IMP=0x0010000000229e20
- (id)operationForRedoing;	// IMP=0x0010000000229bc0
@property(nonatomic, readonly) NSString *actionNameForUndoing;
- (void)actionMain;	// IMP=0x0010000000229a10
- (void)presendNotifications;	// IMP=0x00100000002299f0
@property(nonatomic, readonly) NSDictionary *transferResults;

@end

