//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOCContentUnavailableButtonProperties, NSString, UIColor, UIImage;

@interface DOCContentUnavailableConfiguration
{
}

+ (id)searchConfiguration;	// IMP=0x0020000000010c3c
+ (id)loadingConfiguration;	// IMP=0x0010000000010be5
+ (id)emptyExtraProminentConfiguration;	// IMP=0x0010000000010b8e
+ (id)emptyProminentConfiguration;	// IMP=0x0010000000010b37
+ (id)emptyConfiguration;	// IMP=0x0010000000010ae0
+ (Class)implClass;	// IMP=0x0010000000010ac1
- (id)updatedConfigurationForState:(id)arg1;	// IMP=0x0020000000011089
- (id)makeContentView;	// IMP=0x0010000000011039
@property(readonly, nonatomic) DOCContentUnavailableButtonProperties *buttonProperties;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIImage *image;
- (id)asUIKit;	// IMP=0x0010000000010ad2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
