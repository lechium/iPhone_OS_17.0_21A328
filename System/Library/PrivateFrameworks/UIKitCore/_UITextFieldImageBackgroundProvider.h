//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UITextFieldImageBackgroundView;

__attribute__((visibility("hidden")))
@interface _UITextFieldImageBackgroundProvider
{
    _UITextFieldImageBackgroundView *_backgroundView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000050ac21
- (void)layoutIfNeeded;	// IMP=0x000000000050ab41
- (void)setNeedsDisplay;	// IMP=0x000000000050ab00
- (void)_applyCorrectImage;	// IMP=0x000000000050aa26
- (void)enabledDidChangeAnimated:(_Bool)arg1;	// IMP=0x000000000050a920
- (void)addToTextField:(id)arg1;	// IMP=0x000000000050a8a7
- (id)backgroundView;	// IMP=0x000000000050a892

@end

