//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, _TtC4Maps31RAPNotificationDetailsViewModel;

@interface RAPNotificationDescriptionViewModel : NSObject
{
    _TtC4Maps31RAPNotificationDetailsViewModel *_detailsViewModel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000237ad1
- (_Bool)shouldDisplayLink;	// IMP=0x0010000000237a3e
@property(readonly, copy, nonatomic) NSString *linkButtonLink;
@property(readonly, copy, nonatomic) NSString *linkButtonText;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) NSString *titleText;
@property(readonly, copy, nonatomic) UIColor *imageBackgroundColor;
@property(readonly, copy, nonatomic) NSString *imageName;
- (id)initWithRAPNotificationDetailsViewModel:(id)arg1;	// IMP=0x0010000000237857

@end

