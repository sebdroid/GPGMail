/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountInfoTabOwner.h"
#import "MCActivityTarget.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class IMAPGateway, MCActivityMonitor, MCInvocationQueue, MFIMAPAccount, NSArray, NSButton, NSImageView, NSOutlineView, NSPredicate, NSProgressIndicator, NSSearchField, NSTextField, NSView, NSWindow;

@interface IMAPMailboxes : NSObject <AccountInfoTabOwner, MCActivityTarget, NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    NSView *_mailboxesView;
    NSSearchField *_searchField;
    NSOutlineView *_mailboxesOutline;
    NSButton *_subscribeButton;
    NSButton *_unsubscribeButton;
    NSProgressIndicator *_fetchProgressIndicator;
    NSTextField *_fetchStatusField;
    NSImageView *_statusImageView;
    MFIMAPAccount *_account;
    IMAPGateway *_gateway;
    NSPredicate *_predicate;
    NSArray *_mailboxes;
    NSArray *_filteredMailboxes;
    MCActivityMonitor *_mailboxListMonitor;
    MCInvocationQueue *_subscribeQueue;
    NSWindow *_window;
}

@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void)accountInfoWillShowView:(id)arg1;
- (void)accountInfoWillHideView:(id)arg1;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)_handleError:(id)arg1 settingSubscribedState:(id)arg2 forMailboxPath:(id)arg3 account:(id)arg4;
- (void)_setSubscribedState:(BOOL)arg1 forMailboxPath:(id)arg2 parentUid:(id)arg3;
- (void)_reallySetSubscribedState:(id)arg1 parentUid:(id)arg2 account:(id)arg3 forMailboxPath:(id)arg4;
- (void)_reallySetSubscribedState:(BOOL)arg1 forMailboxPath:(id)arg2 parentUid:(id)arg3 account:(id)arg4 refreshListing:(BOOL)arg5;
- (void)_updateEntryTreeForChangedEntry:(id)arg1 oldValue:(BOOL)arg2;
- (id)_mailboxEntryForMailbox:(id)arg1;
- (id)_mailboxEntryForPath:(id)arg1;
- (id)predicate;
- (void)_clearFilteredMailboxes:(id)arg1;
- (void)_clearFilteredMailboxes;
- (void)filterMailboxList:(id)arg1;
- (void)unsubscribeButtonClicked:(id)arg1;
- (void)subscribeButtonClicked:(id)arg1;
- (void)_handleSubscriptionRequest:(BOOL)arg1;
- (void)_handleSubscriptionRequest:(BOOL)arg1 forItem:(id)arg2 refreshSet:(id)arg3 recursive:(BOOL)arg4;
- (void)_reallyStopSubscriptionRequest:(id)arg1 refreshList:(id)arg2;
- (void)_stopSubscriptionRequest:(id)arg1;
- (void)_reallyStartSubscriptionRequest:(id)arg1;
- (void)_startSubscriptionRequest;
- (id)view;
- (void)_fetchMailboxListingForAccount:(id)arg1;
- (id)_recursivelyCreateMailboxEntriesForList:(id)arg1 subscribedList:(id)arg2 inLocalPath:(id)arg3 remotePath:(id)arg4 forAccount:(id)arg5;
- (void)_mailboxFetchCompleted:(id)arg1 forAccount:(id)arg2;
- (void)setupUIWithAccount:(id)arg1;
- (void)_setupNotifications;
- (void)setUIEnabled:(BOOL)arg1;
- (void)_updateUIForOnlineState:(id)arg1;
- (id)_alertIcon;
- (void)dealloc;
- (id)init;

@end

