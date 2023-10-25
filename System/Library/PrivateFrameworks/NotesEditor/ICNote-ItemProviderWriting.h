//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICNote.h>

@class NSArray, NSString;

@interface ICNote (ItemProviderWriting)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x00100000000330bb
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000337c0
- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x00100000000337a7
- (void)prepareForCopyingData;	// IMP=0x001000000003365f
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000332d0
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x00100000000332a9
- (long long)itemProviderType;	// IMP=0x001000000003329e
- (id)itemProviderIdentifier;	// IMP=0x001000000003328c
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)writableTypeIdentifiersForNoteContent;	// IMP=0x00100000000330c8
- (id)visibleAttachmentTextStoragesForTextLayoutManager:(id)arg1;	// IMP=0x00100000001b36e0
- (id)textStoragesFor:(id)arg1;	// IMP=0x00100000001b2d70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
