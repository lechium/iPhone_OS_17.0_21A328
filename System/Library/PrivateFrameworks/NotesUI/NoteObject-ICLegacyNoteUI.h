//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Notes/NoteObject.h>

@class NSArray, NSString;

@interface NoteObject (ICLegacyNoteUI)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x001000000015b9d0
+ (id)newNoteForAirDropDocument:(id)arg1 context:(id)arg2 styler:(id)arg3 attachmentPreviewGenerator:(id)arg4;	// IMP=0x00100000001640d7
+ (void)importLegacyNoteFromWebArchive:(id)arg1 withContent:(id)arg2 intoLegacyNote:(id)arg3 context:(id)arg4;	// IMP=0x0010000000163db5
+ (id)noteByImportingLegacyNoteFromWebArchive:(id)arg1 withContent:(id)arg2 context:(id)arg3 styler:(id)arg4 attachmentPreviewGenerator:(id)arg5;	// IMP=0x0010000000163709
- (_Bool)appendAttributedString:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000025ad0
- (id)fileWrapperForURL:(id)arg1;	// IMP=0x001000000015c1f3
- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x001000000015c1da
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015c011
- (long long)itemProviderType;	// IMP=0x001000000015c006
- (id)itemProviderIdentifier;	// IMP=0x001000000015bff4
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015bb55
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x001000000015bb2e
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

