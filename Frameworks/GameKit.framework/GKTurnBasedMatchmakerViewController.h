/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKTurnBasedMatchmakerViewControllerDelegate>, GKHostedTurnBasedViewController, GKMatchRequest, GKRemoteTurnBasedViewController;

@interface GKTurnBasedMatchmakerViewController : UINavigationController {
    GKHostedTurnBasedViewController *_hostedViewController;
    GKMatchRequest *_matchRequest;
    GKRemoteTurnBasedViewController *_remoteViewController;
    BOOL _showExistingMatches;
    <GKTurnBasedMatchmakerViewControllerDelegate> *_turnBasedMatchmakerDelegateWeak;
}

@property(retain) GKHostedTurnBasedViewController * hostedViewController;
@property(retain) GKMatchRequest * matchRequest;
@property(retain) GKRemoteTurnBasedViewController * remoteViewController;
@property BOOL showExistingMatches;
@property <GKTurnBasedMatchmakerViewControllerDelegate> * turnBasedMatchmakerDelegate;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)_setupChildViewController;
- (void)authenticationChanged:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (id)hostedViewController;
- (id)init;
- (id)initWithMatchRequest:(id)arg1;
- (void)loadView;
- (id)matchRequest;
- (void)playerQuitMatch:(id)arg1;
- (id)remoteViewController;
- (void)setHostedViewController:(id)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setShowExistingMatches:(BOOL)arg1;
- (void)setTurnBasedMatchmakerDelegate:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showExistingMatches;
- (unsigned int)supportedInterfaceOrientations;
- (id)turnBasedMatchmakerDelegate;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end