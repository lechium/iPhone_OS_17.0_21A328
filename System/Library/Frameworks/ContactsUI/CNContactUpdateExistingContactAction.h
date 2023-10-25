//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNContactUpdateExistingContactAction : CNContactAction
{
    CNContact *_existingContact;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000309b47
@property(retain, nonatomic) CNContact *existingContact; // @synthesize existingContact=_existingContact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x0000000000309a33
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000309662

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
