//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentCell
{
    _Bool _enabled;	// 8 = 0x8
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_showPickableDiagnostic;	// IMP=0x000000000003aaf6
- (void)updateThumbnail;	// IMP=0x000000000003a8fe
- (void)updateContents;	// IMP=0x000000000003a679
- (void)reloadItem:(_Bool)arg1;	// IMP=0x000000000003a657
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003a5e9
- (void)prepareForReuse;	// IMP=0x000000000003a5a6

@end

