/* Copyright (c) 2019 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BAT_ADS_INTERNAL_FUNNEL_SITES_H_
#define BAT_ADS_INTERNAL_FUNNEL_SITES_H_

#include <string>
#include <vector>

#include "bat/ads/internal/purchase_intent/funnel_site_info.h"

namespace ads {

static const std::vector<std::string> _segments = {
	"automotive purchase intent by category-compact pickup",
	"automotive purchase intent by category-compact suv",
	"automotive purchase intent by category-compact van",
	"automotive purchase intent by category-entry compact car",
	"automotive purchase intent by category-entry luxury car",
	"automotive purchase intent by category-entry midsize car",
	"automotive purchase intent by category-entry sports car",
	"automotive purchase intent by category-fullsize suv",
	"automotive purchase intent by category-hd fullsize pickup",
	"automotive purchase intent by category-ld fullsize pickup",
	"automotive purchase intent by category-luxury sports car",
	"automotive purchase intent by category-luxury suv",
	"automotive purchase intent by category-mid luxury car",
	"automotive purchase intent by category-midsize suv",
	"automotive purchase intent by category-premium compact car",
	"automotive purchase intent by category-premium luxury car",
	"automotive purchase intent by category-premium midsize car",
	"automotive purchase intent by category-premium sports car",
	"automotive purchase intent by make-acura",
	"automotive purchase intent by make-audi",
	"automotive purchase intent by make-bmw",
	"automotive purchase intent by make-buick",
	"automotive purchase intent by make-cadillac",
	"automotive purchase intent by make-chevrolet",
	"automotive purchase intent by make-chrysler",
	"automotive purchase intent by make-dodge",
	"automotive purchase intent by make-fiat",
	"automotive purchase intent by make-ford",
	"automotive purchase intent by make-gmc",
	"automotive purchase intent by make-honda",
	"automotive purchase intent by make-hyundai",
	"automotive purchase intent by make-infiniti",
	"automotive purchase intent by make-jaguar",
	"automotive purchase intent by make-jeep",
	"automotive purchase intent by make-kia",
	"automotive purchase intent by make-land rover",
	"automotive purchase intent by make-lexus",
	"automotive purchase intent by make-lincoln",
	"automotive purchase intent by make-mazda",
	"automotive purchase intent by make-mercedes-benz",
	"automotive purchase intent by make-mini",
	"automotive purchase intent by make-mitsubishi",
	"automotive purchase intent by make-nissan",
	"automotive purchase intent by make-porsche",
	"automotive purchase intent by make-ram",
	"automotive purchase intent by make-saab",
	"automotive purchase intent by make-scion",
	"automotive purchase intent by make-smart",
	"automotive purchase intent by make-subaru",
	"automotive purchase intent by make-suzuki",
	"automotive purchase intent by make-toyota",
	"automotive purchase intent by make-volkswagen",
	"automotive purchase intent by make-volvo"
};

// TODO(MH): Generate list dynamically?
// TODO(MH): all FunnelSiteInfos should pass a reference to the same _segments
static const std::vector<FunnelSiteInfo> _automotive_funnel_sites = {
    FunnelSiteInfo(_segments, "http://autotrader.com", 3),
    FunnelSiteInfo(_segments, "http://carmax.com", 3),
    FunnelSiteInfo(_segments, "http://car.com", 3),
    FunnelSiteInfo(_segments, "http://autobytel.com", 3),
    FunnelSiteInfo(_segments, "http://dealerrater.com", 3),
    FunnelSiteInfo(_segments, "http://eastwood.com", 3),
    FunnelSiteInfo(_segments, "http://buyatoyota.com", 3),
    FunnelSiteInfo(_segments, "http://hertzcarsales.com", 3),
    FunnelSiteInfo(_segments, "http://andysautosport.com", 3),
    FunnelSiteInfo(_segments, "http://legendarymotorcar.com", 3),
    FunnelSiteInfo(_segments, "http://streetsideclassics.com", 3),
    FunnelSiteInfo(_segments, "http://carchex.com", 3),
    FunnelSiteInfo(_segments, "http://hybrid-racing.com", 3),
    FunnelSiteInfo(_segments, "http://sportcompactwarehouse.com", 3),
    FunnelSiteInfo(_segments, "http://australianmusclecarsales.com.au", 3),
    FunnelSiteInfo(_segments, "http://optionsauto.com", 3),
    FunnelSiteInfo(_segments, "http://genracer.com", 3),
    FunnelSiteInfo(_segments, "http://endurancewarranty.com", 3),
    FunnelSiteInfo(_segments, "http://fswerks.com", 3),
    FunnelSiteInfo(_segments, "http://kingmotorsports.com", 3),
    FunnelSiteInfo(_segments, "http://brotherstrucks.com", 3),
    FunnelSiteInfo(_segments, "http://hymanltd.com", 3),
    FunnelSiteInfo(_segments, "http://7ent.com", 3),
    FunnelSiteInfo(_segments, "http://passwordjdm.com", 3),
    FunnelSiteInfo(_segments, "http://xcceleration.com", 3),
    FunnelSiteInfo(_segments, "http://billetspecialties.com", 3),
    FunnelSiteInfo(_segments, "http://thewestcoastclassics.com", 3),
    FunnelSiteInfo(_segments, "http://stainlessworks.net", 3),
    FunnelSiteInfo(_segments, "http://lkperformance.co.uk", 3),
    FunnelSiteInfo(_segments, "http://cimotorsports.net", 3),
    FunnelSiteInfo(_segments, "http://oldbug.com", 3),
    FunnelSiteInfo(_segments, "http://countryclassiccars.com", 3),
    FunnelSiteInfo(_segments, "http://steelerubber.com", 3),
    FunnelSiteInfo(_segments, "http://westcoastautosport.com", 3),
    FunnelSiteInfo(_segments, "http://chevsofthe40s.com", 3),
    FunnelSiteInfo(_segments, "http://goldenclassics.com", 3),
    FunnelSiteInfo(_segments, "http://rksport.com", 3),
    FunnelSiteInfo(_segments, "http://springrates.com", 3),
    FunnelSiteInfo(_segments, "http://mershons.com", 3),
    FunnelSiteInfo(_segments, "http://paragonmotorclub.com", 3),
    FunnelSiteInfo(_segments, "http://troy-ford-extended-warranty.com", 3),
    FunnelSiteInfo(_segments, "http://continentalwarranty.org", 3),
    FunnelSiteInfo(_segments, "http://vvncc.com", 3),
    FunnelSiteInfo(_segments, "http://vintagespeedsters.com", 3),
    FunnelSiteInfo(_segments, "http://evolutionimport.com", 3),
    FunnelSiteInfo(_segments, "http://classicinvest.com", 3),
    FunnelSiteInfo(_segments, "http://xcaliberart.com", 3),
    FunnelSiteInfo(_segments, "http://valenticlassics.com", 3),
    FunnelSiteInfo(_segments, "http://lombardfordwarrantys.com", 3),
    FunnelSiteInfo(_segments, "http://holden.co.uk", 3),
    FunnelSiteInfo(_segments, "http://dantesparts.com", 3),
    FunnelSiteInfo(_segments, "http://airheadparts.com", 3),
    FunnelSiteInfo(_segments, "http://dsmparts.com", 3),
    FunnelSiteInfo(_segments, "http://motorchrome.com", 3),
    FunnelSiteInfo(_segments, "http://americanclassic.com", 3),
    FunnelSiteInfo(_segments, "http://northshoresportscars.com", 3),
    FunnelSiteInfo(_segments, "http://rywire.com", 3),
    FunnelSiteInfo(_segments, "http://proteamcorvette.com", 3),
    FunnelSiteInfo(_segments, "http://rallyarmor.com", 3),
    FunnelSiteInfo(_segments, "http://turbotechracing.com", 3),
    FunnelSiteInfo(_segments, "http://belairautoparts.com", 3),
    FunnelSiteInfo(_segments, "http://snydersantiqueauto.com", 3),
    FunnelSiteInfo(_segments, "http://halibrand.com", 3),
    FunnelSiteInfo(_segments, "http://warrantyheadquarters.com", 3),
    FunnelSiteInfo(_segments, "http://vintagemotorssarasota.com", 3),
    FunnelSiteInfo(_segments, "http://bobdrake.com", 3),
    FunnelSiteInfo(_segments, "http://cooperclassiccars.com", 3),
    FunnelSiteInfo(_segments, "http://classiccarautoparts.com", 3),
    FunnelSiteInfo(_segments, "http://chryslerwarrantys.com", 3),
    FunnelSiteInfo(_segments, "http://contes.com", 3),
    FunnelSiteInfo(_segments, "http://proformanceunlimited.com", 3),
    FunnelSiteInfo(_segments, "http://wilsonmotorco.com", 3),
    FunnelSiteInfo(_segments, "http://aaautowarranty.com", 3),
    FunnelSiteInfo(_segments, "http://beangarage.com", 3),
    FunnelSiteInfo(_segments, "http://kstech.biz", 3),
    FunnelSiteInfo(_segments, "http://oldmoparts.com", 3),
    FunnelSiteInfo(_segments, "http://yogisinc.com", 3),
    FunnelSiteInfo(_segments, "http://jshmotors.com", 3),
    FunnelSiteInfo(_segments, "http://pdm-racing.com", 3),
    FunnelSiteInfo(_segments, "http://turninconcepts.com", 3),
    FunnelSiteInfo(_segments, "http://convertibleparts.com", 3),
    FunnelSiteInfo(_segments, "http://eaglegb.com", 3),
    FunnelSiteInfo(_segments, "http://collectorsautosupply.com", 3),
    FunnelSiteInfo(_segments, "http://supracarparts.com", 3),
    FunnelSiteInfo(_segments, "http://aston.co.uk", 3),
    FunnelSiteInfo(_segments, "http://cashfortrucks.com", 3),
    FunnelSiteInfo(_segments, "http://pjsautoworld.com", 3),
    FunnelSiteInfo(_segments, "http://morrisminorspares.com", 3),
    FunnelSiteInfo(_segments, "http://carsinc.com", 3),
    FunnelSiteInfo(_segments, "http://amkproducts.com", 3),
    FunnelSiteInfo(_segments, "http://certifiedautoappraisers.com", 3),
    FunnelSiteInfo(_segments, "http://dealer.autobytel.com", 3),
    FunnelSiteInfo(_segments, "http://steam-car-dev.karoo.net", 3),
    FunnelSiteInfo(_segments, "http://accuratevalue.com", 3),
    FunnelSiteInfo(_segments, "http://advancedautodealers.com", 3),
    FunnelSiteInfo(_segments, "http://affordableclassicsinc.com", 3),
    FunnelSiteInfo(_segments, "http://aktivperformanceparts.co.uk", 3),
    FunnelSiteInfo(_segments, "http://acscorp.com", 3),
    FunnelSiteInfo(_segments, "http://anamericanclassic.com", 3),
    FunnelSiteInfo(_segments, "http://americanstreetrod.com", 3),
    FunnelSiteInfo(_segments, "http://acautos.com", 3),
    FunnelSiteInfo(_segments, "http://antiqueautomobileradio.com", 3),
    FunnelSiteInfo(_segments, "http://apexperformance.net", 3),
    FunnelSiteInfo(_segments, "http://autoappraisalsbyalan.com", 3),
    FunnelSiteInfo(_segments, "http://armoredcars.com", 3),
    FunnelSiteInfo(_segments, "http://autoappraisalnetwork.com", 3),
    FunnelSiteInfo(_segments, "http://theautoappraiser.com", 3),
    FunnelSiteInfo(_segments, "http://autobound.com", 3),
    FunnelSiteInfo(_segments, "http://autoinstruments.com", 3),
    FunnelSiteInfo(_segments, "http://autopi.com", 3),
    FunnelSiteInfo(_segments, "http://autoservicewarranty.com", 3),
    FunnelSiteInfo(_segments, "http://autoadvisor.com", 3),
    FunnelSiteInfo(_segments, "http://the-autoline.com", 3),
    FunnelSiteInfo(_segments, "http://automall.com", 3),
    FunnelSiteInfo(_segments, "http://automobileinspections.com", 3),
    FunnelSiteInfo(_segments, "http://autosearcher.com", 3),
    FunnelSiteInfo(_segments, "http://autosource-online.com", 3),
    FunnelSiteInfo(_segments, "http://autovantage.com", 3),
    FunnelSiteInfo(_segments, "http://avantiparts.biz", 3),
    FunnelSiteInfo(_segments, "http://avrecovery.com", 3),
    FunnelSiteInfo(_segments, "http://bwautoparts.com", 3),
    FunnelSiteInfo(_segments, "http://bcautos.com", 3),
    FunnelSiteInfo(_segments, "http://benzamotors.com", 3),
    FunnelSiteInfo(_segments, "http://blackmountainprecision.com", 3),
    FunnelSiteInfo(_segments, "http://boomslang.us", 3),
    FunnelSiteInfo(_segments, "http://buyavette.net", 3),
    FunnelSiteInfo(_segments, "http://buyerservicesinternational.com", 3),
    FunnelSiteInfo(_segments, "http://calimerswheelshop.com", 3),
    FunnelSiteInfo(_segments, "http://carbroker.com.au", 3),
    FunnelSiteInfo(_segments, "http://carcarepeople.com", 3),
    FunnelSiteInfo(_segments, "http://cascadeclassics.com", 3),
    FunnelSiteInfo(_segments, "http://certifiedcarcare.com", 3),
    FunnelSiteInfo(_segments, "http://martinpacker.com", 3),
    FunnelSiteInfo(_segments, "http://aerokits.net", 3),
    FunnelSiteInfo(_segments, "http://chicagovintage.com", 3),
    FunnelSiteInfo(_segments, "http://chuckstrucksllc.com", 3),
    FunnelSiteInfo(_segments, "http://brassauto.com", 3),
    FunnelSiteInfo(_segments, "http://classicbuicks.com", 3),
    FunnelSiteInfo(_segments, "http://classiccarinspections.com", 3),
    FunnelSiteInfo(_segments, "http://s219981800.onlinehome.us", 3),
    FunnelSiteInfo(_segments, "http://classiccarmall.com", 3),
    FunnelSiteInfo(_segments, "http://classiccarprojects.com", 3),
    FunnelSiteInfo(_segments, "http://classicsteeringwheels.com", 3),
    FunnelSiteInfo(_segments, "http://cobrarestorers.com", 3),
    FunnelSiteInfo(_segments, "http://coiloversdirect.co.uk", 3),
    FunnelSiteInfo(_segments, "http://grilleteeth.com", 3),
    FunnelSiteInfo(_segments, "http://cruisinclassics.com", 3),
    FunnelSiteInfo(_segments, "http://curryacuracare.com", 3),
    FunnelSiteInfo(_segments, "http://customclassic.com", 3),
    FunnelSiteInfo(_segments, "http://cygnusperformance.com", 3),
    FunnelSiteInfo(_segments, "http://factoryservicecontracts.com", 3),
    FunnelSiteInfo(_segments, "http://hotrodproducts.com", 3),
    FunnelSiteInfo(_segments, "http://daytonaparts.com", 3),
    FunnelSiteInfo(_segments, "http://officialhyundaiwarranty.com", 3),
    FunnelSiteInfo(_segments, "http://deucesteel.com", 3),
    FunnelSiteInfo(_segments, "http://dewittracing.com", 3),
    FunnelSiteInfo(_segments, "http://doubledparts.com", 3),
    FunnelSiteInfo(_segments, "http://dragers.com", 3),
    FunnelSiteInfo(_segments, "http://earlyford.com", 3),
    FunnelSiteInfo(_segments, "http://eatmyflames.com", 3),
    FunnelSiteInfo(_segments, "http://ecklersautomotive.com", 3),
    FunnelSiteInfo(_segments, "http://endlessendeavors.com", 3),
    FunnelSiteInfo(_segments, "http://europerformance.co.uk", 3),
    FunnelSiteInfo(_segments, "http://europeancollectibles.com", 3),
    FunnelSiteInfo(_segments, "http://expertautoappraisals.com", 3),
    FunnelSiteInfo(_segments, "http://manheimglobaltrader.com", 3),
    FunnelSiteInfo(_segments, "http://extended-warranty-pro.com", 3),
    FunnelSiteInfo(_segments, "http://funkypower.co.uk", 3),
    FunnelSiteInfo(_segments, "http://geneshotrodparts.com", 3),
    FunnelSiteInfo(_segments, "http://glasermotors.com", 3),
    FunnelSiteInfo(_segments, "http://goodsamesp.com", 3),
    FunnelSiteInfo(_segments, "http://gotboostinc.com", 3),
    FunnelSiteInfo(_segments, "http://greaterdakotaclassics.com", 3),
    FunnelSiteInfo(_segments, "http://handhantique.com", 3),
    FunnelSiteInfo(_segments, "http://hardtopstands.com", 3),
    FunnelSiteInfo(_segments, "http://eharwood.com", 3),
    FunnelSiteInfo(_segments, "http://heidts.com", 3),
    FunnelSiteInfo(_segments, "http://thehotrodgirl.com", 3),
    FunnelSiteInfo(_segments, "http://hotrodssuperstore.com", 3),
    FunnelSiteInfo(_segments, "http://hotrods2die4.com", 3),
    FunnelSiteInfo(_segments, "http://hptmotorsports.com", 3),
    FunnelSiteInfo(_segments, "http://importperformance.com", 3),
    FunnelSiteInfo(_segments, "http://oldradman.com", 3),
    FunnelSiteInfo(_segments, "http://classic-carstore.com", 3),
    FunnelSiteInfo(_segments, "http://i-van.org", 3),
    FunnelSiteInfo(_segments, "http://islandmotorsports.com", 3),
    FunnelSiteInfo(_segments, "http://jaycorptech.com", 3),
    FunnelSiteInfo(_segments, "http://jbmotors.net", 3),
    FunnelSiteInfo(_segments, "http://jefflilly.com", 3),
    FunnelSiteInfo(_segments, "http://woodwheels.com", 3),
    FunnelSiteInfo(_segments, "http://classic-new.com", 3),
    FunnelSiteInfo(_segments, "http://jscspeed.com", 3),
    FunnelSiteInfo(_segments, "http://key-men.com", 3),
    FunnelSiteInfo(_segments, "http://kfxperformance.com", 3),
    FunnelSiteInfo(_segments, "http://klasse356.com", 3),
    FunnelSiteInfo(_segments, "http://kmbritishcars.ca", 3),
    FunnelSiteInfo(_segments, "http://landefabrication.com", 3),
    FunnelSiteInfo(_segments, "http://landlproducts.com", 3),
    FunnelSiteInfo(_segments, "http://lanocharacing.com", 3),
    FunnelSiteInfo(_segments, "http://larryscarsparts.com", 3),
    FunnelSiteInfo(_segments, "http://littledearborn.com", 3),
    FunnelSiteInfo(_segments, "http://lostnthe50sclassiccars.com", 3),
    FunnelSiteInfo(_segments, "http://luzzago.com", 3),
    FunnelSiteInfo(_segments, "http://maidstonesportscars.co.uk", 3),
    FunnelSiteInfo(_segments, "http://vintageandclassiccars.co.uk", 3),
    FunnelSiteInfo(_segments, "http://maxmerrittauto.com", 3),
    FunnelSiteInfo(_segments, "http://britbits.com", 3),
    FunnelSiteInfo(_segments, "http://memorylaneclassiccars.com", 3),
    FunnelSiteInfo(_segments, "http://englishwheels.net", 3),
    FunnelSiteInfo(_segments, "http://metrommp.com", 3),
    FunnelSiteInfo(_segments, "http://mgcity.com.au", 3),
    FunnelSiteInfo(_segments, "http://moderncapriparts.biz", 3),
    FunnelSiteInfo(_segments, "http://mooneyes.com", 3),
    FunnelSiteInfo(_segments, "http://themotorcompany.com", 3),
    FunnelSiteInfo(_segments, "http://mustangdreams.com", 3),
    FunnelSiteInfo(_segments, "http://mycarinspections.co.uk", 3),
    FunnelSiteInfo(_segments, "http://nationalmoparts.com", 3),
    FunnelSiteInfo(_segments, "http://classicmustang.com", 3),
    FunnelSiteInfo(_segments, "http://newcarslowestprice.com", 3),
    FunnelSiteInfo(_segments, "http://newtoncomm.co.uk", 3),
    FunnelSiteInfo(_segments, "http://capecodmustang.com", 3),
    FunnelSiteInfo(_segments, "http://northernclassictrucks.com", 3),
    FunnelSiteInfo(_segments, "http://classicmusclecars.com", 3),
    FunnelSiteInfo(_segments, "http://option1garage.com.au", 3),
    FunnelSiteInfo(_segments, "http://pagparts.com", 3),
    FunnelSiteInfo(_segments, "http://parrautomotive.com", 3),
    FunnelSiteInfo(_segments, "http://partsfromthepast.com", 3),
    FunnelSiteInfo(_segments, "http://peakesclassics.com", 3),
    FunnelSiteInfo(_segments, "http://performancedepot.com", 3),
    FunnelSiteInfo(_segments, "http://perrysprojectcars.com", 3),
    FunnelSiteInfo(_segments, "http://peter-byrne.com", 3),
    FunnelSiteInfo(_segments, "http://musclecardecals.net", 3),
    FunnelSiteInfo(_segments, "http://autoappraisers.com", 3),
    FunnelSiteInfo(_segments, "http://prestigecarnet.com.au", 3),
    FunnelSiteInfo(_segments, "http://rrclassiccars.com", 3),
    FunnelSiteInfo(_segments, "http://racinggreencars.com", 3),
    FunnelSiteInfo(_segments, "http://store.racinglab.com", 3),
    FunnelSiteInfo(_segments, "http://radersrelics.com", 3),
    FunnelSiteInfo(_segments, "http://ratsglassbodies.com", 3),
    FunnelSiteInfo(_segments, "http://rdfabs.com", 3),
    FunnelSiteInfo(_segments, "http://reds-headers.com", 3),
    FunnelSiteInfo(_segments, "http://rtcc.co.uk", 3),
    FunnelSiteInfo(_segments, "http://ezboyinteriors.com", 3),
    FunnelSiteInfo(_segments, "http://rollingart.com", 3),
    FunnelSiteInfo(_segments, "http://rpmvt.com", 3),
    FunnelSiteInfo(_segments, "http://ruckusrods.com", 3),
    FunnelSiteInfo(_segments, "http://runnymedemotorcompany.com", 3),
    FunnelSiteInfo(_segments, "http://sandersreproglass.com", 3),
    FunnelSiteInfo(_segments, "http://satingloss.com", 3),
    FunnelSiteInfo(_segments, "http://scottssupertrucks.com", 3),
    FunnelSiteInfo(_segments, "http://securecarcare.com", 3),
    FunnelSiteInfo(_segments, "http://selectmotors.net", 3),
    FunnelSiteInfo(_segments, "http://shafersclassic.com", 3),
    FunnelSiteInfo(_segments, "http://shiftworks.com", 3),
    FunnelSiteInfo(_segments, "http://show-cars.com", 3),
    FunnelSiteInfo(_segments, "http://sidchaverscompany.com", 3),
    FunnelSiteInfo(_segments, "http://sleemansclassiccars.com", 3),
    FunnelSiteInfo(_segments, "http://slidegood.com", 3),
    FunnelSiteInfo(_segments, "http://villageservice.com", 3),
    FunnelSiteInfo(_segments, "http://stencilsandstripes.com", 3),
    FunnelSiteInfo(_segments, "http://stonebridgecars.com", 3),
    FunnelSiteInfo(_segments, "http://streetrodgarage.com", 3),
    FunnelSiteInfo(_segments, "http://streetrodglass.com", 3),
    FunnelSiteInfo(_segments, "http://srbymichael.com", 3),
    FunnelSiteInfo(_segments, "http://rodsforsale.com", 3),
    FunnelSiteInfo(_segments, "http://highspeedmotors.com", 3),
    FunnelSiteInfo(_segments, "http://studebakerparts.com", 3),
    FunnelSiteInfo(_segments, "http://sunsetclassics.com", 3),
    FunnelSiteInfo(_segments, "http://texasclassiccarsofdallas.com", 3),
    FunnelSiteInfo(_segments, "http://tfbdesigns.com", 3),
    FunnelSiteInfo(_segments, "http://then-now-auto.com", 3),
    FunnelSiteInfo(_segments, "http://thunderbirdsouthwest.com", 3),
    FunnelSiteInfo(_segments, "http://tolesautomotive.com", 3),
    FunnelSiteInfo(_segments, "http://totallyautoinc.com", 3),
    FunnelSiteInfo(_segments, "http://tr-classic.de", 3),
    FunnelSiteInfo(_segments, "http://turborevs.org.uk", 3),
    FunnelSiteInfo(_segments, "http://twmperformance.com", 3),
    FunnelSiteInfo(_segments, "http://jagxk.com", 3),
    FunnelSiteInfo(_segments, "http://ultramaticdynamics.com", 3),
    FunnelSiteInfo(_segments, "http://usaautoappraisers.com", 3),
    FunnelSiteInfo(_segments, "http://usedeclipseparts.com", 3),
    FunnelSiteInfo(_segments, "http://usedcarinspections.org", 3),
    FunnelSiteInfo(_segments, "http://vintagerodcomponents.com", 3),
    FunnelSiteInfo(_segments, "http://vintagecarradiatorcompany.co.uk", 3),
    FunnelSiteInfo(_segments, "http://vintagemotorgarage.com", 3),
    FunnelSiteInfo(_segments, "http://vipclassics.com", 3),
    FunnelSiteInfo(_segments, "http://vsoc.nl", 3),
    FunnelSiteInfo(_segments, "http://wwmotorcars.com", 3),
    FunnelSiteInfo(_segments, "http://warrantydirect.com", 3),
    FunnelSiteInfo(_segments, "http://warrantywarehouse.com", 3),
    FunnelSiteInfo(_segments, "http://watsons-streetworks.com", 3),
    FunnelSiteInfo(_segments, "http://weatherstripspecial.com", 3),
    FunnelSiteInfo(_segments, "http://wescottsauto.com", 3),
    FunnelSiteInfo(_segments, "http://willysreplacementparts.com", 3),
    FunnelSiteInfo(_segments, "http://wirthscustomauto.com", 3),
    FunnelSiteInfo(_segments, "http://fordwood.com", 3),
    FunnelSiteInfo(_segments, "http://woodiesusa.com", 3),
    FunnelSiteInfo(_segments, "http://gearheadcity.com", 3),
    FunnelSiteInfo(_segments, "http://woolcockantiqueauto.com", 3),
    FunnelSiteInfo(_segments, "http://wow-products.com", 3),
    FunnelSiteInfo(_segments, "http://xatracing.com", 3),
    FunnelSiteInfo(_segments, "http://yearwood.com", 3),
    FunnelSiteInfo(_segments, "http://carfax.com", 3),
    FunnelSiteInfo(_segments, "http://cars.com", 3),
    FunnelSiteInfo(_segments, "http://cargurus.com", 3),
    FunnelSiteInfo(_segments, "http://truecar.com", 3),
    FunnelSiteInfo(_segments, "http://kbb.com", 3),
    FunnelSiteInfo(_segments, "http://edmunds.com", 3),
    FunnelSiteInfo(_segments, "http://caranddriver.com", 3),
    FunnelSiteInfo(_segments, "http://motortrend.com", 3),
    FunnelSiteInfo(_segments, "http://carsforsale.com", 3),
    FunnelSiteInfo(_segments, "http://thecarconnection.com", 3),
    FunnelSiteInfo(_segments, "http://autoblog.com", 3),
    FunnelSiteInfo(_segments, "http://jdpower.com", 3),
    FunnelSiteInfo(_segments, "http://autolist.com", 3),
    FunnelSiteInfo(_segments, "http://auto.com", 3),
    FunnelSiteInfo(_segments, "http://carsdirect.com", 3),
    FunnelSiteInfo(_segments, "http://carvana.com", 3),
    FunnelSiteInfo(_segments, "http://toyota.com", 3),
    FunnelSiteInfo(_segments, "http://nadaguides.com", 3),
    FunnelSiteInfo(_segments, "http://roadandtrack.com", 3),
    FunnelSiteInfo(_segments, "http://chevrolet.com", 3),
    FunnelSiteInfo(_segments, "http://fueleconomy.gov", 3),
    FunnelSiteInfo(_segments, "http://ford.com", 3),
    FunnelSiteInfo(_segments, "http://iseecars.com", 3),
    FunnelSiteInfo(_segments, "http://usnews.com", 3),
    FunnelSiteInfo(_segments, "http://awadserver.com", 3),
    FunnelSiteInfo(_segments, "http://consumerreports.org", 3),
    FunnelSiteInfo(_segments, "http://autoguide.com", 3),
    FunnelSiteInfo(_segments, "http://nissanusa.com", 3),
    FunnelSiteInfo(_segments, "http://jalopnik.com", 3),
    FunnelSiteInfo(_segments, "http://honda.com", 3),
    FunnelSiteInfo(_segments, "http://motor1.com", 3),
    FunnelSiteInfo(_segments, "http://mbusa.com", 3),
    FunnelSiteInfo(_segments, "http://jeep.com", 3),
    FunnelSiteInfo(_segments, "http://lexus.com", 3),
    FunnelSiteInfo(_segments, "http://mazdausa.com", 3),
    FunnelSiteInfo(_segments, "http://subaru.com", 3),
    FunnelSiteInfo(_segments, "http://driving.ca", 3),
    FunnelSiteInfo(_segments, "http://audiusa.com", 3),
    FunnelSiteInfo(_segments, "http://autotrader.ca", 3),
    FunnelSiteInfo(_segments, "http://enterprisecarsales.com", 3),
    FunnelSiteInfo(_segments, "http://gmc.com", 3),
    FunnelSiteInfo(_segments, "http://greencarreports.com", 3),
    FunnelSiteInfo(_segments, "http://autoweb.com", 3),
    FunnelSiteInfo(_segments, "http://acura.com", 3),
    FunnelSiteInfo(_segments, "http://autowise.com", 3),
    FunnelSiteInfo(_segments, "http://bmwusa.com", 3),
    FunnelSiteInfo(_segments, "http://newcars.com", 3),
    FunnelSiteInfo(_segments, "http://autoweek.com", 3),
    FunnelSiteInfo(_segments, "http://hyundaiusa.com", 3),
    FunnelSiteInfo(_segments, "http://hemmings.com", 3),
    FunnelSiteInfo(_segments, "http://realtor.com", 3),
    FunnelSiteInfo(_segments, "http://repairpal.com", 3),
    FunnelSiteInfo(_segments, "http://vw.com", 3),
    FunnelSiteInfo(_segments, "http://classiccars.com", 3),
    FunnelSiteInfo(_segments, "http://auto123.com", 3),
    FunnelSiteInfo(_segments, "http://craigslist.org", 3),
    FunnelSiteInfo(_segments, "http://autonews.com", 3),
    FunnelSiteInfo(_segments, "http://fuelly.com", 3),
    FunnelSiteInfo(_segments, "http://nerdwallet.com", 3),
    FunnelSiteInfo(_segments, "http://topspeed.com", 3),
    FunnelSiteInfo(_segments, "http://whatcar.com", 3),
    FunnelSiteInfo(_segments, "http://carbuzz.com", 3),
    FunnelSiteInfo(_segments, "http://creditkarma.com", 3),
    FunnelSiteInfo(_segments, "http://bankrate.com", 3),
    FunnelSiteInfo(_segments, "http://capitalone.com", 3),
    FunnelSiteInfo(_segments, "http://imotors.com", 3),
    FunnelSiteInfo(_segments, "http://vroom.com", 3),
    FunnelSiteInfo(_segments, "http://carsguide.com.au", 3),
    FunnelSiteInfo(_segments, "http://bbb.org", 3),
    FunnelSiteInfo(_segments, "http://dodge.com", 3),
    FunnelSiteInfo(_segments, "http://hotcars.com", 3),
    FunnelSiteInfo(_segments, "http://vauto.com", 3),
    FunnelSiteInfo(_segments, "http://vehiclehistory.com", 3),
    FunnelSiteInfo(_segments, "http://automotivetouchup.com", 3),
    FunnelSiteInfo(_segments, "http://thetruthaboutcars.com", 3),
    FunnelSiteInfo(_segments, "http://zillow.com", 3),
    FunnelSiteInfo(_segments, "http://carsgenius.com", 3),
    FunnelSiteInfo(_segments, "http://hagerty.com", 3),
    FunnelSiteInfo(_segments, "http://homedepot.com", 3),
    FunnelSiteInfo(_segments, "http://buyerlink.com", 3),
    FunnelSiteInfo(_segments, "http://carfaxonline.com", 3),
    FunnelSiteInfo(_segments, "http://yelp.com", 3),
    FunnelSiteInfo(_segments, "http://lowes.com", 3),
    FunnelSiteInfo(_segments, "http://redfin.com", 3),
    FunnelSiteInfo(_segments, "http://att.com", 3),
    FunnelSiteInfo(_segments, "http://autonation.com", 3),
    FunnelSiteInfo(_segments, "http://bankofamerica.com", 3),
    FunnelSiteInfo(_segments, "http://carcomplaints.com", 3),
    FunnelSiteInfo(_segments, "http://costco.com", 3),
    FunnelSiteInfo(_segments, "http://vinurl.com", 3),
    FunnelSiteInfo(_segments, "http://carwow.co.uk", 3),
    FunnelSiteInfo(_segments, "http://7passengervehicleszone.com", 3),
    FunnelSiteInfo(_segments, "http://carophile.com", 3),
    FunnelSiteInfo(_segments, "http://getauto.com", 3),
    FunnelSiteInfo(_segments, "http://usedcars.com", 3),
    FunnelSiteInfo(_segments, "http://autotempest.com", 3),
    FunnelSiteInfo(_segments, "http://choosenissan.com", 3),
    FunnelSiteInfo(_segments, "http://dealer.com", 3),
    FunnelSiteInfo(_segments, "http://leasehackr.com", 3),
    FunnelSiteInfo(_segments, "http://mate1.com", 3),
    FunnelSiteInfo(_segments, "http://mysearches.net", 3),
    FunnelSiteInfo(_segments, "http://paintscratch.com", 3),
    FunnelSiteInfo(_segments, "http://badvin.org", 3),
    FunnelSiteInfo(_segments, "http://carsoup.com", 3),
    FunnelSiteInfo(_segments, "http://manheim.com", 3),
    FunnelSiteInfo(_segments, "http://surecritic.com", 3),
    FunnelSiteInfo(_segments, "http://torquenews.com", 3),
    FunnelSiteInfo(_segments, "http://gmfleet.com", 3),
    FunnelSiteInfo(_segments, "http://instamotor.com", 3),
    FunnelSiteInfo(_segments, "http://agirlsguidetocars.com", 3),
    FunnelSiteInfo(_segments, "http://autoconsumerinfo.com", 3),
    FunnelSiteInfo(_segments, "http://best8seatersuv.com", 3),
    FunnelSiteInfo(_segments, "http://faqtoids.com", 3),
    FunnelSiteInfo(_segments, "http://germaincars.com", 3),
    FunnelSiteInfo(_segments, "http://gtcarlot.com", 3),
    FunnelSiteInfo(_segments, "http://carwise.com", 3),
    FunnelSiteInfo(_segments, "http://buick.com", 3),
    FunnelSiteInfo(_segments, "http://nada.com", 3),
    FunnelSiteInfo(_segments, "http://alamo.com", 3),
    FunnelSiteInfo(_segments, "http://carvillesautomart.com", 3),
    FunnelSiteInfo(_segments, "http://leasetrader.com", 3),
    FunnelSiteInfo(_segments, "http://motominer.com", 3),
    FunnelSiteInfo(_segments, "http://quicklane.com", 3),
    FunnelSiteInfo(_segments, "http://westernslopeauto.com", 3),
    FunnelSiteInfo(_segments, "http://airportvanrental.com", 3),
    FunnelSiteInfo(_segments, "http://confused.com", 3),
    FunnelSiteInfo(_segments, "http://dealerrater.ca", 3),
    FunnelSiteInfo(_segments, "http://hireology.com", 3),
    FunnelSiteInfo(_segments, "http://nationalcar.com", 3),
    FunnelSiteInfo(_segments, "http://snap21.com", 3),
    FunnelSiteInfo(_segments, "http://vwserviceandparts.com", 3)
};

class FunnelSites {
 public:
  FunnelSites();
  ~FunnelSites();

  static FunnelSiteInfo MatchFunnelSite(const std::string& url);
};

}  // namespace ads

#endif  // BAT_ADS_INTERNAL_FUNNEL_SITES_H_