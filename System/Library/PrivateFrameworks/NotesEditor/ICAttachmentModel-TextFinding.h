//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentModel.h>

@class NSArray, NSString;

@interface ICAttachmentModel (TextFinding)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x00100000000105b0
- (void)textFindingResultsMatchingString:(id)arg1 ignoreCase:(_Bool)arg2 wholeWords:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007d43
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010d81
- (void)registerFileLoadHandlersOnItemProvider:(id)arg1;	// IMP=0x0010000000010903
- (id)itemProviderWritingData;	// IMP=0x0010000000010827
- (id)itemProviderWritingURL;	// IMP=0x001000000001074a
- (id)itemProviderUTI;	// IMP=0x00100000000106fa
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x00100000000106d3
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (long long)itemProviderType;	// IMP=0x00100000000105a5
- (id)itemProviderIdentifier;	// IMP=0x0010000000010555

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
