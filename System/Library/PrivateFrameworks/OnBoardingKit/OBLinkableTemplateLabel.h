//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface OBLinkableTemplateLabel
{
    UITapGestureRecognizer *_tapRecognizer;	// 8 = 0x8
    NSURL *_destinationLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b228
@property(retain, nonatomic) NSURL *destinationLink; // @synthesize destinationLink=_destinationLink;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
- (void)setLearnMoreURL:(id)arg1;	// IMP=0x000000000000ae5f
- (void)_linkTapped:(id)arg1;	// IMP=0x000000000000adde
- (id)init;	// IMP=0x000000000000ad4a

@end

